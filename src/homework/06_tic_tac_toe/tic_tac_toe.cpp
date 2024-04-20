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
    if(pegs.size() == 9)
    {
        for(long unsigned int i = 0; i < pegs.size(); i += 3)
        {
            std::cout<<pegs[i]<<" | "<<pegs[i+1]<<" | "<<pegs[i+2]<<"\n";
            if(i != 6){std::cout<<"- + - + - \n";}
        }
    }
    else if(pegs.size() == 16)
    {
        for(long unsigned int i = 0; i < pegs.size(); i += 4)
        {
            std::cout<<pegs[i]<<" | "<<pegs[i+1]<<" | "<<pegs[i+2]<<" | "<<pegs[i+3]<<"\n";
            if(i != 12){std::cout<<"- + - + - + - \n";}
        }
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
    return false;
}

bool tic_tac_toe::check_row_win()
{
    return false;
}

bool tic_tac_toe::check_diagonal_win()
{
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