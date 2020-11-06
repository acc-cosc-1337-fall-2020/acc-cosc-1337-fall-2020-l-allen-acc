//h
#include <iostream>
#include <string>
#include <vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::string;  using std::vector;

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    //void display_board() const;
    string get_winner() const;
    friend std::istream & operator >> (std::istream & in, TicTacToe & mark);
    friend std::ostream & operator << (std::ostream & out, const TicTacToe & display);

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagnol_win();
    void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player;
    vector <string> pegs {9, " "};
    string winner;

};

#endif