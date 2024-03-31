#include "tic_tac_toe.h"
using std::cout; using std::cin;

int main() 
{
	tic_tac_toe game;
	string first_player;
	int position;
	char choice = 'Y';

	do
	{
		cout<<"Enter first player(X or O): ";
		cin>>first_player;
		game.start_game(first_player);
		game.display_board();

		while(!(game.game_over()))
		{
			cout<<"Where would you like to place (1-9)? ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}

		cout<<"Enter Y if you would like to play again: \n";
		cin>>choice;

	} while(choice == 'y' || choice == 'Y');
	
	
	return 0;
}