//h
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <fstream>
#include <iostream>
#include <memory>

#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

using std::vector;

class TicTacToeData
{
    public:
        void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
        std::vector<std::unique_ptr<TicTacToe>> get_games();

    private:
};

#endif