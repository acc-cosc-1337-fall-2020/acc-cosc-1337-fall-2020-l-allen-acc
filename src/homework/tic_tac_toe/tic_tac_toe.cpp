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
    if (game_over() == false) set_next_player();
}

string TicTacToe::get_player() const
{
    return player;
}

/* void TicTacToe::display_board() const
{
    cout<<pegs[0]<<"|"<<pegs[1]<<"|"<<pegs[2] <<std::endl
        <<pegs[3]<<"|"<<pegs[4]<<"|"<<pegs[5] <<std::endl
        <<pegs[6]<<"|"<<pegs[7]<<"|"<<pegs[8] << "\n\n";
} */

string TicTacToe::get_winner() const
{
    return winner;
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

void TicTacToe::set_winner()
{
    if (player == "X") {winner = "O";}
    else {winner = "X";}
}

bool TicTacToe::check_diagnol_win()
{
    return false;
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
    for(std::size_t i=0; i < pegs.size(); ++i)
    {
        pegs[i] = " ";
    }
}


std::ostream & operator<<(std::ostream & out, const TicTacToe & display)
{
    if (display.pegs.size()==9)
    {
        out <<display.pegs[0]<<"|"<<display.pegs[1]<<"|"<<display.pegs[2] <<std::endl
            <<display.pegs[3]<<"|"<<display.pegs[4]<<"|"<<display.pegs[5] <<std::endl
            <<display.pegs[6]<<"|"<<display.pegs[7]<<"|"<<display.pegs[8] << "\n\n";       
    }
    else
    {
        out <<display.pegs[0]<<"|"<<display.pegs[1]<<"|"<<display.pegs[2]<<"|"<<display.pegs[3] <<std::endl
            <<display.pegs[4]<<"|"<<display.pegs[5]<<"|"<<display.pegs[6]<<"|"<<display.pegs[7] <<std::endl
            <<display.pegs[8]<<"|"<<display.pegs[9]<<"|"<<display.pegs[10]<<"|"<<display.pegs[11] <<std::endl
            <<display.pegs[12]<<"|"<<display.pegs[13]<<"|"<<display.pegs[14]<<"|"<<display.pegs[15] << "\n\n";
    }
    return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & mark)
{
    int position;
    std::cout << "Enrter position:\t";
    in >> position;
    mark.mark_board(position);

    return in;
}