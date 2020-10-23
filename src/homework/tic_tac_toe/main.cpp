#include "tic_tac_toe.h"
#include <iostream>

using std::cout;	using std::cin;

int main() 
{
	int mark;
	std::string player;
	Specifications game;
	cout << "Choose a player ('X' or 'O')\t";
	cin >> player;
	game.start_game(player);

	while (game.game_over() == false)
	{
		cout << "Choose a position (1-9)\t";
		cin >> mark;
		game.mark_board(mark);
		game.display_board();
	} 

	cout << "\n***GAME OVER!***\n";

	return 0;
}