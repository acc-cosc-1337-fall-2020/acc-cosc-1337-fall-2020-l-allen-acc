#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

using std::cin;	using std::cout;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("")
{
	int mark;
	Specifications test;
	test.start_game("X");
	for (int i = 0; i<9; i++)
	{
		cout << "mark";
		cin >> mark;
		test.mark_board(mark);
		test.display_board();
	}
	
	REQUIRE(test.game_over() == true);
}
