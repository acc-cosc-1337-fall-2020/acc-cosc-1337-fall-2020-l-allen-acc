#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
#include <iostream>
#include <utility>

using std::cout;	using std::cin;

int main() 
{
	std::string player;
	char option;
	int gametype;
	std::unique_ptr<TicTacToe> game = nullptr;
	
	TicTacToeData data;
	TicTacToeManager stats(data);

	do
	{
		cout << "Choose a player ('X' or 'O')\t";
		cin >> player;

		while (player != "X" && player != "O")
		{
			cout << "\nERROR - INCORRECT INPUT (capitol 'X' or 'O)'\nPlayer input:\t";
			cin >> player;
			cout << "\n";
		}


		cout << "Choose a game type (3 or 4):\t";
		cin >> gametype;

		while (gametype != 3 && gametype != 4)
		{
			cout << "\nERROR - INCORRECT GAMETYPE (3 or 4)\nPlayer input:\t";
			cin >> gametype;
			cout << "\n";
		}


		if (gametype ==3)
		{
			game = std::make_unique<TicTacToe3> ();
		}

		else if (gametype == 4)
		{
			game = std::make_unique<TicTacToe4> ();
		}


		game->start_game(player);

		do
		{
			cin >> *game;

			cout << *game;
			
		} while (game->game_over() == false);
		
		cout << "\n" << game->get_winner() << " is the winner!";
		cout << "\n***GAME OVER!***\n";

		stats.save_game(game);

		cout << "Would you like to play again? ('Y' or 'y' to continue)\n";
		cin >> option;
		cout<<"\n";
	} while (option == 'Y' || option == 'y');
	
	cout << stats;

	return 0;
}