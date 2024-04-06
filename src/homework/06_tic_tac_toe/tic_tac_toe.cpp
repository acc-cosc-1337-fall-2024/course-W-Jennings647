//cpp
#include "tic_tac_toe.h"
using std::cout;

bool tic_tac_toe::game_over()
{

    if(check_column_win() || check_diagonal_win() || check_row_win())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        winner = "C";
        return true;
    }
    else{return false;}
}

void tic_tac_toe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}


void tic_tac_toe::mark_board(int position)
{
    position--;
    pegs[position] = player;
    set_next_player();
}

void tic_tac_toe::display_board() const
{
    for(long unsigned int i = 0; i < pegs.size(); i += 3)
    {
        std::cout<<pegs[i]<<" | "<<pegs[i+1]<<" | "<<pegs[i+2]<<"\n";
        if(i != 6){std::cout<<"- + - + - \n";}
    }

}
//private stuff

void tic_tac_toe::clear_board()
{
    for(auto& peg : pegs)
    {
        peg = " ";
    }
}

void tic_tac_toe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool tic_tac_toe::check_board_full()
{
    for(long unsigned int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}

bool tic_tac_toe::check_column_win()
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

bool tic_tac_toe::check_row_win()
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

bool tic_tac_toe::check_diagonal_win()
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

void tic_tac_toe::set_winner()
{

    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}