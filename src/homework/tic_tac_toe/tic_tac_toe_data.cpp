//cpp
#include "tic_tac_toe_data.h"
#include <fstream>


void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    std::ofstream save_data;
    save_data.open("tictactoe_saves.txt");

    for (auto const& board : games)
    {
        std::vector<std::string> pegs = board->get_pegs();
        for (auto& i : pegs)// loop through each character in string
        {
            save_data << i;//Write to file each time. End line after each game.
        }
        
        save_data << board->get_winner() << std::endl; 
    }
    save_data.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<std::unique_ptr<TicTacToe>> boards;

    std::ifstream get_data;
    get_data.open("tictactoe_saves.txt");

    std::string line;
    

    while (std::getline(get_data, line))
    {
        vector<std::string> pegs;

        for (unsigned int i = 0; i < line.size() -1; i++)
        {
            std::string ch(1,line[i]);
            pegs.push_back(std::move(ch));
        }
        // Create a string to get the winner(last item in the vector of string)
        
        std::string winner(1, line.size() -1);
        std::unique_ptr<TicTacToe> board = nullptr;

        if (line.size() == 9)
        {
           board = std::make_unique<TicTacToe3> (pegs, winner);
        }

        else if (line.size() == 16)
        {
            board = std::make_unique<TicTacToe4> (pegs, winner);
        }

        boards.push_back(std::move(board));
    }
    get_data.close();

    return boards;
}