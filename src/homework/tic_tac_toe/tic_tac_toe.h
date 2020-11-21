//h
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using std::string;  using std::vector;  using std::string;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int sum) : pegs (sum * sum, " ") {}
    TicTacToe(vector<string> p, string win) : pegs {p}, winner{win} {}
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    string get_winner() const;
    vector<string> get_pegs() const {return pegs;}
    friend std::istream & operator >> (std::istream & in, TicTacToe & mark);
    friend std::ostream & operator << (std::ostream & out, const TicTacToe & display);

protected:
    vector <string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagnol_win();

private:
    void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player;
    string winner;

};

#endif