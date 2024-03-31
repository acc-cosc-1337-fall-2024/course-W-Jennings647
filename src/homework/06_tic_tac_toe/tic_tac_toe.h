#include<iostream>
#include<string>
#include<vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::cout; using std::vector; using std::string;

class tic_tac_toe
{
    public:
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        void display_board() const;
        std::string get_player() const{return player;};
    
    private:
        void clear_board();
        void set_next_player();
        bool check_board_full();
        std::string player;
        std::vector<std::string> pegs {9, " "};
        

        
};

#endif