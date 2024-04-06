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
		do
		{
			cout<<"Enter first player(X or O): ";
			cin>>first_player;
		}while(first_player != "X" && first_player != "O");
		game.start_game(first_player);
		game.display_board();

		while(!(game.game_over()))
		{
			cout<<"Where would you like to place (1-9)? ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}
		if(game.get_winner() != "C") {cout<<game.get_winner()<<" wins! \n";}
		else {cout<<game.get_winner()<<". Tie!\n";}
		cout<<"Enter Y if you would like to play again: \n";
		cin>>choice;

	} while(choice == 'y' || choice == 'Y');
	
	
	return 0;
}

