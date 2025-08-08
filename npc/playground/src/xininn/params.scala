package xininn

case class params
(
  xLen: Int = 32,
  excutionmode: String = "multicycle",
  debug: Boolean = false,
  targetSets: Set[String] = Set("rv_i", "rv64_i", "rv_m", "rv64_m" ,"rv32_i","rv_zicsr", "rv_system")



)
