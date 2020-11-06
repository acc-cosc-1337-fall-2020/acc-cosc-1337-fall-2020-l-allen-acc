#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cout;	using std::cin;

int main() 
{
	std::string player;
	char option;
	TicTacToe game;
	TicTacToeManager stats;

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

		do
		{
			cin >> game;

			cout << game;
			
		} while (game.game_over() == false);
		
		cout << "\n" << game.get_winner() << " is the winner!";
		cout << "\n***GAME OVER!***\n";

		stats.save_game(game);

		cout << "Would you like to play again? ('Y' or 'y' to continue)\n";
		cin >> option;
		cout<<"\n";
	} while (option == 'Y' || option == 'y');
	
	cout << stats;

	return 0;
}