#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
using std::unique_ptr; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

//start game tests


TEST_CASE("Verify functions start_game and get_player for X, tic_tac_toe_3")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();
   
    game->start_game("X");
    REQUIRE(game->get_player() == "X");
}


TEST_CASE("Verify functions start_game and get_player for O, tic_tac_toe_3")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();
   
    game->start_game("O");
    REQUIRE(game->get_player() == "O");
}

TEST_CASE("Verify functions start_game and get_player for X, tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
   
    game->start_game("X");
    REQUIRE(game->get_player() == "X");
}


TEST_CASE("Verify functions start_game and get_player for O, tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
   
    game->start_game("O");
    REQUIRE(game->get_player() == "O");
}

//tic_tac_toe_3 tests


TEST_CASE("Verify function check_column_win, column 1, using tic_tac_toe_3")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


   
    tic_tac_toe_manager games;
   
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);


}


TEST_CASE("Verify function check_column_win, column 2, using tic_tac_toe_3")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();
    game->start_game("X");
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
   
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}


TEST_CASE("Verify function check_column_win, column 3, using tic_tac_toe_3")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();
    game->start_game("X");
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}


TEST_CASE("Verify function check_row_win, row 1, using tic_tac_toe_3")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}


TEST_CASE("Verify function check_row_win, row 2, using tic_tac_toe_3")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();
    game->start_game("X");
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}


TEST_CASE("Verify function check_row_win, row 3, using tic_tac_toe_3")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();
    game->start_game("X");
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}


TEST_CASE("Verify function check_diagonal_win, from top left, using tic_tac_toe_3")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);


}
TEST_CASE("Verify function check_diagonal_win, from top right, using tic_tac_toe_3")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();
    game->start_game("X");
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}


TEST_CASE("Check function check_board_full, using tic_tac_toe_3")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();
    game->start_game("X");


    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);


    game->mark_board(7);
    
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "C");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 0);
    REQUIRE(o == 0);
    REQUIRE(t == 1);


}


TEST_CASE("Check function get_winner_total, using tic_tac_toe_3")
{
    unique_ptr<tic_tac_toe> game1 = make_unique<tic_tac_toe_3>();
    game1->start_game("X");
    tic_tac_toe_manager games;
    int x, o, t;


    game1->start_game("X");
    for(int a = 1; a < 8; a++)
    {
        game1->mark_board(a);
        if(a < 7){REQUIRE(game1->game_over() == false);}
    }
    REQUIRE(game1->game_over() == true);
    REQUIRE(game1->get_winner() == "X");
    *game1;
    games.save_game(game1);
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);


    unique_ptr<tic_tac_toe> game2 = make_unique<tic_tac_toe_3>();


    game2->start_game("O");
    for(int a = 1; a < 8; a++)
    {
        game2->mark_board(a);
        if(a < 7){REQUIRE(game2->game_over() == false);}
    }
    REQUIRE(game2->game_over() == true);
    REQUIRE(game2->get_winner() == "O");
    games.save_game(game2);
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 1);
    REQUIRE(t == 0);


    unique_ptr<tic_tac_toe> game3 = make_unique<tic_tac_toe_3>();
    game3->start_game("X");
    game3->mark_board(2);
    REQUIRE(game3->game_over() == false);
    game3->mark_board(1);
    REQUIRE(game3->game_over() == false);
    game3->mark_board(3);
    REQUIRE(game3->game_over() == false);
    game3->mark_board(5);
    REQUIRE(game3->game_over() == false);
    game3->mark_board(4);
    REQUIRE(game3->game_over() == false);
    game3->mark_board(6);
    REQUIRE(game3->game_over() == false);
    game3->mark_board(9);
    REQUIRE(game3->game_over() == false);
    game3->mark_board(8);
    REQUIRE(game3->game_over() == false);


    game3->mark_board(7);
    REQUIRE(game3->game_over() == true);
    REQUIRE(game3->get_winner() == "C");
    games.save_game(game3);
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 1);
    REQUIRE(t == 1);
   


}

//tic_tac_toe_4

TEST_CASE("Verify function check_column_win, column 1, using tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
	REQUIRE(game->game_over() == false);
    game->mark_board(10);
    REQUIRE(game->game_over() == false);
    game->mark_board(13);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


   
    tic_tac_toe_manager games;
   
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);


}


TEST_CASE("Verify function check_column_win, column 2, using tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
    game->start_game("X");
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(10);
	REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(14);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
   
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}


TEST_CASE("Verify function check_column_win, column 3, using tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
    game->start_game("X");
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
	REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(15);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}

TEST_CASE("Verify function check_column_win, column 4, using tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
    game->start_game("X");
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(12);
	REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}

TEST_CASE("Verify function check_row_win, row 1, using tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
	REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}


TEST_CASE("Verify function check_row_win, row 2, using tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
    game->start_game("X");
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
	REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}


TEST_CASE("Verify function check_row_win, row 3, using tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
    game->start_game("X");
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(10);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
	REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(12);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}

TEST_CASE("Verify function check_row_win, row 4, using tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
    game->start_game("X");
    game->mark_board(13);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(14);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(15);
	REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}

TEST_CASE("Verify function check_diagonal_win, from top left, using tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
    game->start_game("X");
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
	REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);
    
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);


}
TEST_CASE("Verify function check_diagonal_win, from top right, using tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
    game->start_game("X");
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(10);
	REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(13);
    //game.display_board();
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);
}


TEST_CASE("Check function check_board_full, using tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
    game->start_game("X");


	for(long unsigned int i = 1; i <= 12; i++)
	{
    	game->mark_board(i);
    	REQUIRE(game->game_over() == false);
    }

	game->mark_board(14);
    REQUIRE(game->game_over() == false);
	game->mark_board(13);
    REQUIRE(game->game_over() == false);
	game->mark_board(16);
    REQUIRE(game->game_over() == false);

    game->mark_board(15);
    game->display_board();
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "C");


    tic_tac_toe_manager games;
    games.save_game(game);
    int x, o, t;
    games.get_winner_total(x, o, t);
    REQUIRE(x == 0);
    REQUIRE(o == 0);
    REQUIRE(t == 1);


}


TEST_CASE("Check function get_winner_total, using tic_tac_toe_4")
{
    unique_ptr<tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();
    tic_tac_toe_manager games;
    int x, o, t;


    game1->start_game("X");
    for(long unsigned int i = 1; i <= 12; i++)
	{
    	game1->mark_board(i);
    	REQUIRE(game1->game_over() == false);
    }
    game1->mark_board(13);
	REQUIRE(game1->game_over() == true);
    REQUIRE(game1->get_winner() == "X");
    *game1;
    games.save_game(game1);
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 0);
    REQUIRE(t == 0);


    unique_ptr<tic_tac_toe> game2 = make_unique<tic_tac_toe_4>();


    game2->start_game("O");
    for(long unsigned int i = 1; i <= 12; i++)
	{
    	game2->mark_board(i);
    	REQUIRE(game2->game_over() == false);
    }
    game2->mark_board(13);
    REQUIRE(game2->game_over() == true);
    REQUIRE(game2->get_winner() == "O");
	*game2;
    games.save_game(game2);
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 1);
    REQUIRE(t == 0);


    unique_ptr<tic_tac_toe> game3 = make_unique<tic_tac_toe_4>();
    game3->start_game("X");
    for(long unsigned int i = 1; i <= 12; i++)
	{
    	game3->mark_board(i);
    	REQUIRE(game3->game_over() == false);
    }

	game3->mark_board(14);
    REQUIRE(game3->game_over() == false);
	game3->mark_board(13);
    REQUIRE(game3->game_over() == false);
	game3->mark_board(16);
    REQUIRE(game3->game_over() == false);

    game3->mark_board(15);
    game3->display_board();
    REQUIRE(game3->game_over() == true);
    REQUIRE(game3->get_winner() == "C");
	*game3;
    games.save_game(game3);
    games.get_winner_total(x, o, t);
    REQUIRE(x == 1);
    REQUIRE(o == 1);
    REQUIRE(t == 1);
   


}