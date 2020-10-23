//h
#include <iostream>
#include <string>
#include <vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::string;  using std::vector;

class Specifications
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player;
    vector <string> pegs {9, " "};

};

#endif