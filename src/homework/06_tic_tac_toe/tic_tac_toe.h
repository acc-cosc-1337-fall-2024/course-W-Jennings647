#include<iostream>
#include<string>
#include<vector>
#include<memory>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::cout; using std::vector; using std::string;

class tic_tac_toe
{
    public:
        tic_tac_toe(long unsigned int size) : pegs(size*size, " "){};
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        void display_board() const;
        std::string get_player() const{return player;};
        std::string get_winner() {return winner;};

    protected:
        std::vector<std::string> pegs;
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();
    
    private:
        void clear_board();
        void set_next_player();
        bool check_board_full();
        void set_winner();
        std::string player;
        std::string winner;
        

        
};

#endif