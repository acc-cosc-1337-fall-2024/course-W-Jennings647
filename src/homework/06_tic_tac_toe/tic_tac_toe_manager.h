#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
using std::vector; using std::string;
class tic_tac_toe_manager
{
    public:
        void save_game(std::unique_ptr<tic_tac_toe>& b){update_winner_count(b->get_winner()); games.push_back(std::move(b));};
        void get_winner_total(int& x, int& o, int& t){x = x_win; o = o_win; t = ties;};
        void display_games(){for(long unsigned int i = 0; i < games.size(); i++){games[i]->display_board();}};
    private:
        std::vector<std::unique_ptr<tic_tac_toe>> games;
        int x_win = {0};
        int o_win = {0};
        int ties = {0};
        void update_winner_count(std::string winner);

};

#endif