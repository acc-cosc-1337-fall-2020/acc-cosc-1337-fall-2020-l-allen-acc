#include "tic_tac_toe.h"
#include <iostream>
#include <memory>



//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

using std::unique_ptr;

class TicTacToeManager
{
public:
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
    void save_game(unique_ptr<TicTacToe>& b);
    void get_winner_total(int& o, int& x, int& t);

private:
    void update_winner_count(std::string);
    std::vector<unique_ptr<TicTacToe>> games;
    int o_win = {0};
    int tie = {0};
    int x_win = {0};

};

#endif