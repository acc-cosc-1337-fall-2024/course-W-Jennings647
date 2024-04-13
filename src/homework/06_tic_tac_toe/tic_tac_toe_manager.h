#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
using std::vector; using std::string;
class tic_tac_toe_manager
{
    public:
        void save_game(tic_tac_toe b){games.push_back(b); update_winner_count(b.get_winner());};
        void get_winner_total(int& x, int& o, int& t){x = x_win; o = o_win; t = ties;};
    private:
        std::vector<tic_tac_toe> games;
        int x_win = {0};
        int o_win = {0};
        int ties = {0};
        void update_winner_count(std::string winner);

};

#endif