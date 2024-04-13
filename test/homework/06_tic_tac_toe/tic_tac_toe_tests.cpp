#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify functions start_game and get_player for X")
{
	tic_tac_toe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Verify functions start_game and get_player for O")
{
	tic_tac_toe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Verify function check_column_win, column 1")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(7);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

	tic_tac_toe_manager games;
	games.save_game(game);
	int x, o, t;
	games.get_winner_total(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 0);
	REQUIRE(t == 0);

}

TEST_CASE("Verify function check_column_win, column 2")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(2);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(4);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

	tic_tac_toe_manager games;
	games.save_game(game);
	int x, o, t;
	games.get_winner_total(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 0);
	REQUIRE(t == 0);
}

TEST_CASE("Verify function check_column_win, column 3")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(3);
	game.mark_board(1);
	game.mark_board(6);
	game.mark_board(2);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

	tic_tac_toe_manager games;
	games.save_game(game);
	int x, o, t;
	games.get_winner_total(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 0);
	REQUIRE(t == 0);
}

TEST_CASE("Verify function check_row_win, row 1")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(4);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

	tic_tac_toe_manager games;
	games.save_game(game);
	int x, o, t;
	games.get_winner_total(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 0);
	REQUIRE(t == 0);
}

TEST_CASE("Verify function check_row_win, row 2")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(4);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(2);
	game.mark_board(6);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

	tic_tac_toe_manager games;
	games.save_game(game);
	int x, o, t;
	games.get_winner_total(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 0);
	REQUIRE(t == 0);
}

TEST_CASE("Verify function check_row_win, row 3")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(7);
	game.mark_board(1);
	game.mark_board(8);
	game.mark_board(2);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

	tic_tac_toe_manager games;
	games.save_game(game);
	int x, o, t;
	games.get_winner_total(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 0);
	REQUIRE(t == 0);
}

TEST_CASE("Verify function check_diagonal_win, from top left")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(9);
	//game.display_board();
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

	tic_tac_toe_manager games;
	games.save_game(game);
	int x, o, t;
	games.get_winner_total(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 0);
	REQUIRE(t == 0);

}
TEST_CASE("Verify function check_diagonal_win, from top right")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(3);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(2);
	game.mark_board(7);
	//game.display_board();
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

	tic_tac_toe_manager games;
	games.save_game(game);
	int x, o, t;
	games.get_winner_total(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 0);
	REQUIRE(t == 0);
}

TEST_CASE("Check function check_board_full")
{
	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	//game.display_board();
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");

	tic_tac_toe_manager games;
	games.save_game(game);
	int x, o, t;
	games.get_winner_total(x, o, t);
	REQUIRE(x == 0);
	REQUIRE(o == 0);
	REQUIRE(t == 1);

}

TEST_CASE("Check function get_winner_total")
{
	tic_tac_toe game;
	tic_tac_toe_manager games;
	int x, o, t;

	game.start_game("X");
	for(int a = 1; a < 8; a++)
	{
		game.mark_board(a);
	}
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
	games.save_game(game);
	games.get_winner_total(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 0);
	REQUIRE(t == 0);

	game.start_game("O");
	for(int a = 1; a < 8; a++)
	{
		game.mark_board(a);
	}
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "O");
	games.save_game(game);
	games.get_winner_total(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 0);

	game.start_game("X");
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
	games.save_game(game);
	games.get_winner_total(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);
	

}