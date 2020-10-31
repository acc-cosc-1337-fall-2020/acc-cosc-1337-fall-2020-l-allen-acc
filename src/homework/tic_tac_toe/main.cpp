#include "tic_tac_toe.h"
#include <iostream>

using std::cout;	using std::cin;

int main() 
{
	int mark;
	std::string player;
	char option;
	TicTacToe game;

	do
	{
		cout << "Choose a player ('X' or 'O')\t";
		cin >> player;
		while (player != "X" && player != "O")
		{
			cout << "\nERROR - Incorect input capitol 'X' or 'O'\nPlayer input:\t";
			cin >> player;
			cout << "\n";
		}

		game.start_game(player);

		while (game.game_over() == false)
		{
			cout << "Choose a position (1-9)\t";
			cin >> mark;
			game.mark_board(mark);
			game.display_board();
		} 

		cout << "\n***GAME OVER!***\n";

		cout << "Would you like to play again? ('Y' or 'y' to continue)\n";
		cin >> option;
	} while (option == 'Y' || option == 'y');
	
	return 0;
}