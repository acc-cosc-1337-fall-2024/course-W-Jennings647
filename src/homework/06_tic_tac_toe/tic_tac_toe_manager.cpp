//cpp
#include "tic_tac_toe_manager.h"
using std::vector; using std::string;

void tic_tac_toe_manager::update_winner_count(std::string winner)
{
    if(winner == "X"){x_win++;}
    else if(winner == "O"){o_win++;}
    else{ties++;}
}