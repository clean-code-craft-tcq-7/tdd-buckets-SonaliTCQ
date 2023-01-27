#include <iostream.h>
#include "current_charge_range.hpp"

TEST_CASE("Show range for current samples")
{
  
  std::ostringstream oss;
  std::streambuf* p_cout_streambuf = std::cout.rdbuf();
  std::cout.rdbuf(oss.rdbuf());

  detect_range(3,5);

  std::cout.rdbuf(p_cout_streambuf);
  
  REQUIRE(oss.str() == "3-5, 4\n";
          
}
