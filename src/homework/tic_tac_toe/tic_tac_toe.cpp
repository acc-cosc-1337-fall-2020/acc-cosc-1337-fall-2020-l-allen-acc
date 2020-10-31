//cpp
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over() 
{
    if (check_column_win() == true || check_row_win() == true || check_diagnol_win() == true)
    {
        set_winner();
        return true;    
    }

    else if (check_board_full() == true) 
    {
        player = "C";
        set_winner();
        return true;
    }

    else return false; 
}

void TicTacToe::start_game(string first_player) 
{
    player = first_player;

    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::display_board() const
{
    cout<<pegs[0]<<"|"<<pegs[1]<<"|"<<pegs[2] <<std::endl
        <<pegs[3]<<"|"<<pegs[4]<<"|"<<pegs[5] <<std::endl
        <<pegs[6]<<"|"<<pegs[7]<<"|"<<pegs[8] << "\n\n";
}

string TicTacToe::get_winner()
{
    return winner;
}

bool TicTacToe::check_column_win()
{
    if (((pegs[0] == pegs[3] && pegs[3] == pegs[6]) && pegs[0] != " ") ||
        ((pegs[1] == pegs[4] && pegs[4] == pegs[7]) && pegs[1] != " ") ||
        ((pegs[2] == pegs[5] && pegs[5] == pegs[8]) && pegs[2] != " "))
        return true;
    
    else {return false;}
}

bool TicTacToe::check_row_win()
{
    if (((pegs[0] == pegs[1] && pegs[1] == pegs[2]) && pegs[0] != " ") ||
        ((pegs[3] == pegs[4] && pegs[4] == pegs[5]) && pegs[3] != " ") ||
        ((pegs[6] == pegs[7] && pegs[7] == pegs[8]) && pegs[6] != " "))
        return true;
    
    else {return false;}
}

void TicTacToe::set_winner()
{
    if (player == "X") {winner = "O";}
    else {winner = "X";}
}

bool TicTacToe::check_diagnol_win()
{
    if (((pegs[0] == pegs[4] && pegs[4] == pegs[8]) && pegs[0] != " ") ||
        ((pegs[6] == pegs[4] && pegs[4] == pegs[2]) && pegs[6] != " "))
        return true;
    
    else {return false;}
}

void TicTacToe::set_next_player()
{
    if (player == "X") {player = "O";}
    else {player = "X";}
}

bool TicTacToe::check_board_full()
{
    for (auto i : pegs) 
    {
        if (i == " ") return false;
    }
    
    return true;    
}

void TicTacToe::clear_board()
{
    for (std::size_t i; i<pegs.size(); i++)
    {
        if (pegs[i] != " ") {pegs[i] = " ";}
    }
}