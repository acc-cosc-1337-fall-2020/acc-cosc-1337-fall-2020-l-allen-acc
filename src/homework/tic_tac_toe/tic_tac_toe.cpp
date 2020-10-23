//cpp
#include "tic_tac_toe.h"

using std::cout;

bool Specifications::game_over() 
{
    return check_board_full(); 
}

void Specifications::start_game(string first_player) 
{
    player = first_player;

    clear_board();
}

void Specifications::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

string Specifications::get_player() const
{
    return player;
}

void Specifications::display_board() const
{
    cout<<pegs[0]<<"|"<<pegs[1]<<"|"<<pegs[2] <<std::endl
        <<pegs[3]<<"|"<<pegs[4]<<"|"<<pegs[5] <<std::endl
        <<pegs[6]<<"|"<<pegs[7]<<"|"<<pegs[8] << "\n\n";
}

void Specifications::set_next_player()
{
    if (player == "X") {player = "O";}
    else {player = "X";}
}

bool Specifications::check_board_full()
{
    for (auto i : pegs) 
    {
        if (i == " ") return false;
    }
    
    return true;    
}

void Specifications::clear_board()
{
    for (std::size_t i; i<pegs.size(); i++)
    {
        if (pegs[i] != " ") {pegs[i] = " ";}
    }
}