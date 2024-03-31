#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Check function check_board_full")
{
	tic_tac_toe game;

	for(int i = 1; i < 9; i++)
	{
		game.mark_board(i);
    	REQUIRE(game.game_over() == false);
	}
	
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}