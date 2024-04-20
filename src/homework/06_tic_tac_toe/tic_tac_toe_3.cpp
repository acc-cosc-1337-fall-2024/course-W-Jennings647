#include "tic_tac_toe_3.h"

bool tic_tac_toe_3::check_column_win()
{
    for(int i = 0; i < 3; i++)
    {
        if(pegs[i] == "X" && pegs[i+3] == "X" && pegs[i+6] == "X")
        {
            return true;
        }
        if(pegs[i] == "O" && pegs[i+3] == "O" && pegs[i+6] == "O")
        {
            return true;
        }
    }
    return false;
}

bool tic_tac_toe_3::check_row_win()
{
    for(long unsigned int i = 0; i < pegs.size(); i += 3)
    {
        if(pegs[i] == "X" && pegs[i+1] == "X" && pegs[i+2] == "X")
        {
            return true;
        }
        if(pegs[i] == "O" && pegs[i+1] == "O" && pegs[i+2] == "O")
        {
            return true;
        }
    }
    return false;
}

bool tic_tac_toe_3::check_diagonal_win()
{
    if((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") || (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X"))
    {
        return true;
    }
    if((pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O") || (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O"))
    {
        return true;
    }
    return false;
}