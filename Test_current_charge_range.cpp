#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "current_charge_range.hpp"
#include "test/catch.hpp"
#include <iostream>
#include <sstream>

int* current_charge[] = { 1, 2, 5, 4, 10, 2, 4, 4, 2 };

TEST_CASE("Show range for current samples")
{
  
  std::ostringstream oss;
  std::streambuf* p_cout_streambuf = std::cout.rdbuf();
  std::cout.rdbuf(oss.rdbuf());

  detect_range(*current_charge,2,5);

  std::cout.rdbuf(p_cout_streambuf);
  
  REQUIRE(oss.str() == "2-5, 7\n");
          
}
