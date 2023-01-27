#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "current_charge_range.hpp"
#include "test/catch.hpp"
#include <iostream>
#include <sstream>

TEST_CASE("Show range for current samples")
{
  
  std::ostringstream oss;
  std::streambuf* p_cout_streambuf = std::cout.rdbuf();
  std::cout.rdbuf(oss.rdbuf());

  detect_range(2,5);

  std::cout.rdbuf(p_cout_streambuf);
  
  REQUIRE(oss.str() == "2-5, 7\n");
          
}
