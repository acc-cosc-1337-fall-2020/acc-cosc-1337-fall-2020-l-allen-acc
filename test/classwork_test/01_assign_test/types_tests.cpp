#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "types.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum_numbers function") 
{
	REQUIRE(sum_numbers(5, 5) == 10);
}

TEST_CASE("Test multiple_numbers function")
{
	REQUIRE(multiply_numbers(10) == 50);
	REQUIRE(multiply_numbers(2) == 10);			// Does not work! Argument can not exceed what's in src folder.
}



