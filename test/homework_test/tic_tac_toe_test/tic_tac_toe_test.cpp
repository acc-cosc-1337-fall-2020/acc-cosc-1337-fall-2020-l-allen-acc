#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"


TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Determine a tie - Test Case")
{
	TicTacToe tie;
	tie.start_game("X");
	
	for (int i=1; i<6; i++)
	{
	tie.mark_board(i);
	REQUIRE(tie.game_over() == false);
	}
	tie.mark_board(7);
	REQUIRE(tie.game_over() == false);
	tie.mark_board(6);
	REQUIRE(tie.game_over() == false);
	tie.mark_board(9);
	REQUIRE(tie.game_over() == false);
	tie.mark_board(8);
	
	REQUIRE(tie.game_over() == true);
	REQUIRE(tie.get_winner() == "C");
}

TEST_CASE("First player set to 'X' - Test Case")
{
	TicTacToe x;
	x.start_game("X");

	REQUIRE(x.get_player() == "X");
}

TEST_CASE("First player ste to 'O' - Test Case")
{
	TicTacToe o;
	o.start_game("O");

	REQUIRE(o.get_player() == "O");
}

TEST_CASE("Win by first column - Test Case")
{
	TicTacToe col1;
	col1.start_game("X");
	col1.mark_board(1);
	col1.mark_board(2);
	col1.mark_board(4);
	col1.mark_board(5);
	col1.mark_board(7);

	REQUIRE(col1.game_over() == true);
	REQUIRE(col1.get_winner() == "X");
}

TEST_CASE("Win by second column - Test Case")
{
	TicTacToe col2;
	col2.start_game("X");
	col2.mark_board(2);
	col2.mark_board(1);
	col2.mark_board(5);
	col2.mark_board(3);
	col2.mark_board(8);

	REQUIRE(col2.game_over() == true);
	REQUIRE(col2.get_winner() == "X");
}

TEST_CASE("Win by third column - Test Case")
{
	TicTacToe col3;
	col3.start_game("X");
	col3.mark_board(3);
	col3.mark_board(2);
	col3.mark_board(6);
	col3.mark_board(5);
	col3.mark_board(9);

	REQUIRE(col3.game_over() == true);
	REQUIRE(col3.get_winner() == "X");
}

TEST_CASE("Win by first row - Test Case")
{
	TicTacToe row1;
	row1.start_game("X");
	row1.mark_board(1);
	row1.mark_board(4);
	row1.mark_board(2);
	row1.mark_board(5);
	row1.mark_board(3);

	REQUIRE(row1.game_over() == true);
	REQUIRE(row1.get_winner() == "X");
}

TEST_CASE("Win by second row - Test Case")
{
	TicTacToe row2;
	row2.start_game("X");
	row2.mark_board(4);
	row2.mark_board(2);
	row2.mark_board(5);
	row2.mark_board(1);
	row2.mark_board(6);

	REQUIRE(row2.game_over() == true);
	REQUIRE(row2.get_winner() == "X");
}

TEST_CASE("Win by third row - Test Case")
{
	TicTacToe row3;
	row3.start_game("X");
	row3.mark_board(7);
	row3.mark_board(2);
	row3.mark_board(8);
	row3.mark_board(5);
	row3.mark_board(9);

	REQUIRE(row3.game_over() == true);
	REQUIRE(row3.get_winner() == "X");
}

TEST_CASE("Win by top left diagnol - Test Case")
{
	TicTacToe diag1;
	diag1.start_game("X");
	diag1.mark_board(1);
	diag1.mark_board(2);
	diag1.mark_board(5);
	diag1.mark_board(3);
	diag1.mark_board(9);

	REQUIRE(diag1.game_over() == true);
	REQUIRE(diag1.get_winner() == "X");
}

TEST_CASE("Win by bottom left diagnol - Test Case")
{
	TicTacToe diag2;
	diag2.start_game("X");
	diag2.mark_board(3);
	diag2.mark_board(2);
	diag2.mark_board(5);
	diag2.mark_board(1);
	diag2.mark_board(7);

	REQUIRE(diag2.game_over() == true);
	REQUIRE(diag2.get_winner() == "X");
}

