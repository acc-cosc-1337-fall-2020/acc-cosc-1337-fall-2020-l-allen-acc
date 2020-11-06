#include "tic_tac_toe.h"
#include <iostream>
//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager : public TicTacToe
{
public:
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
    void save_game(const TicTacToe b);
    void get_winner_total(int& o, int& x, int& t);

private:
    void update_winner_count(std::string);
    std::vector<TicTacToe> games;
    int o_win = {0};
    int tie = {0};
    int x_win = {0};

};

#endif