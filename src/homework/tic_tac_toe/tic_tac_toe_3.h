//h
#include <string>
#include <vector>

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
    void check_board_full();
    void clear_board() const;
    string player;
    vector <string> pegs;

};