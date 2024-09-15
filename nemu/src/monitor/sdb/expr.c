/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>


enum {
  TK_HEX = 1,//
  TK_NOTYPE = 256, 
  TK_NUM=255,
  TK_REG=254,
  TK_PLUS=253,
  TK_MINI=252,
  TK_MUL=251,
  TK_DIV=250,
  TK_PAR_L=249,
  TK_PAR_R=248,
  TK_CHAR=247,
  TK_ENTER=246,
  TK_DEREF=245,
  TK_EQ=244,
  /* TODO: Add more token types */

};





static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
  
  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {"0x[a-fA-F0-9]+", TK_HEX},
  {"\\$[a-zA-Z]+[0-9]+",TK_REG},
  {"[a-zA-Z]+",TK_CHAR},
  {"[0-9]+",TK_NUM},
  {"\\(",TK_PAR_L},
  {"\\)",TK_PAR_R},
  {"\\/",TK_DIV},
  {"\\*",TK_MUL},
  {" +", TK_NOTYPE},    // spaces
  {"\\+", TK_PLUS},         // plus
  {"\\-",TK_MINI},
  {"==", TK_EQ},        // equal
  {"\\r",TK_ENTER}
};

#define NR_REGEX ARRLEN(rules)


static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[64] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;
bool check_parenthese(int p, int q) {
  if (tokens[p].type == TK_PAR_L && tokens[q].type == TK_PAR_R) {
    int par = 0;
    for (int i = p; i <= q; i++) {
      if (tokens[i].type == TK_PAR_L) par++;
      else if (tokens[i].type == TK_PAR_R) par--;

      if (par == 0 && i != q) return false; // there are other parentheses
    }
    return true; // the leftest parenthese is matched
  }
  return false;
}

u_int32_t find_main_op(int p, int q) {
  int par = 0;
  int op = -1;
  for (int i = p; i <= q; i++) {
    if (tokens[i].type == TK_PAR_L) par++;
    else if (tokens[i].type == TK_PAR_R) par--;
    else if (par == 0) {
      if (tokens[i].type == TK_PLUS || tokens[i].type == TK_MINI) {
        op = i;
      }
      else if (tokens[i].type == TK_MUL || tokens[i].type == TK_DIV) {
        if (op == -1) {
          op = i;
        }
      }
    }
  }
  return op;
}

static int function2return(){
  return 0;
}
u_int32_t eval(int l, int r) {

  if (l > r) {
    printf("bad expression\n");
    return -1;
  } else if (l == r) {
    return atoi(tokens[l].str);
  } else if (check_parenthese(l, r)) {
    return eval(l + 1, r - 1);
  } else {
    int op = find_main_op(l, r);
    u_int32_t val1 = eval(l, op - 1);
    u_int32_t val2 = eval(op + 1, r);
    switch (tokens[op].type) {
      case TK_PLUS: return val1 + val2;
      case TK_MINI: return val1 - val2;
      case TK_MUL: return val1 * val2;
      case TK_DIV:
        if (val2 == 0) {
          printf("divide zero error occured");
          printf("occured at the token %d\n", op);
          return -1;
        } else {
          return val1 / val2;
        }
      default: assert(0);
    }
  }
}




static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
//char *strcpy(char *dest, const char *src，size);复制src到dest,size指定长度
        switch (rules[i].token_type) {
          case TK_NOTYPE: break;
          case TK_REG:{
            tokens[nr_token].type=rules[i].token_type;
            strncpy(tokens[nr_token].str,substr_start+1,substr_len-1);
            tokens[nr_token].str[substr_len-1]='\0';
            nr_token++;
            break;
          }
          case TK_HEX:{
            tokens[nr_token].type=rules[i].token_type;
            strncpy(tokens[nr_token].str,substr_start,substr_len);
            tokens[nr_token].str[substr_len]='\0';
            nr_token++;
            break;
          }
          case TK_NUM:{
            tokens[nr_token].type=rules[i].token_type;
            strncpy(tokens[nr_token].str,substr_start,substr_len);
            tokens[nr_token].str[substr_len]='\0';
            nr_token++;
            break;
          }
        
          
          
          case TK_PLUS:{
            tokens[nr_token].type=rules[i].token_type;
            strncpy(tokens[nr_token].str,substr_start,substr_len);
            tokens[nr_token].str[substr_len]='\0';
            nr_token++;
            break;
          }
          case TK_MINI:{
            tokens[nr_token].type=rules[i].token_type;
            strncpy(tokens[nr_token].str,substr_start,substr_len);
            tokens[nr_token].str[substr_len]='\0';
            nr_token++;
            break;
          }

          case TK_MUL:{
            tokens[nr_token].type=rules[i].token_type;
            strncpy(tokens[nr_token].str,substr_start,substr_len);
            tokens[nr_token].str[substr_len]='\0';
            nr_token++;
            break;
          }

          case TK_DIV:{
            tokens[nr_token].type=rules[i].token_type;
            strncpy(tokens[nr_token].str,substr_start,substr_len);
            tokens[nr_token].str[substr_len]='\0';
            nr_token++;
            break;
          }

          case TK_PAR_L:{
            tokens[nr_token].type=rules[i].token_type;
            strncpy(tokens[nr_token].str,substr_start,substr_len);
            tokens[nr_token].str[substr_len]='\0';
            nr_token++;
            break;
          }

          case TK_PAR_R:{
            tokens[nr_token].type=rules[i].token_type;
            strncpy(tokens[nr_token].str,substr_start,substr_len);
            tokens[nr_token].str[substr_len]='\0';
            nr_token++;
            break;
          }
          case TK_CHAR:{
            tokens[nr_token].type=rules[i].token_type;
            strncpy(tokens[nr_token].str,substr_start,substr_len);
            tokens[nr_token].str[substr_len]='\0';
            nr_token++;
          }

          default: printf("here once int make_token \n");
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}



word_t expr(char *e, bool *success) {
  //printf("here once in expr\n");//for the test
  if (!make_token(e)) {
    *success = false;
    printf("make token failed\n");
    return 0;
  }
  *success = true;
  for (u_int32_t i = 0; i < nr_token; i ++) {
  if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == TK_PLUS || tokens[i - 1].type == TK_MINI || tokens[i - 1].type == TK_MUL || tokens[i - 1].type == TK_DIV || tokens[i - 1].type == TK_PAR_L)) {
    tokens[i].type = TK_DEREF;
  }else if(tokens[i].type==TK_HEX){
    tokens[i].type=TK_NUM;
    sprintf(tokens[i].str,"%ld",strtol(tokens[i].str,NULL,16));
  }
  }
  for(int i=0;i<nr_token;i++){
    if(tokens[i].type==TK_DEREF){
     if(tokens[i+1].type==TK_CHAR){
        sprintf(tokens[i+1].str,"%d",function2return());
       tokens[i+1].type=TK_NUM;
     }
    }else if(tokens[i].type==TK_REG){
      sprintf(tokens[i].str,"%d",isa_reg_str2val(tokens[i].str,success));
     // printf("funtion in switch reg into value\n");//for the test
      tokens[i].type=TK_NUM;
    }
  }

  /* TODO: Insert codes to evaluate the expression. */
//printf("\nhere%uhere\n",eval(0,nr_token-1));//for the test 
  return eval(0,nr_token-1);
}

