#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
using std::cout; using std::cin; using std::unique_ptr; using std::make_unique; using std::move;

int main() 
{
	unique_ptr<tic_tac_toe> game;
	tic_tac_toe_manager games;
	string first_player;
	int position;
	char choice = 'Y';
	int size = 0;

	do
	{
		do
		{
			cout<<"What size board would you like to play on? (3 for 3x3, or 4 for 4x4) \n";
			cin>>size;
			if(!(size == 3 || size == 4)){cout<<"Invalid input! \n";}
		} while (!(size == 3 || size == 4));
		
		do
		{
			cout<<"Enter first player(X or O): ";
			cin>>first_player;
		}while(first_player != "X" && first_player != "O");

		if(size == 3) //tic_tac_toe_3
		{
			game = make_unique<tic_tac_toe_3>();
			game->start_game(first_player);
			game->display_board();

			while(!(game->game_over()))
			{
				cout<<"Where would you like to place (1-9)? ";
				cin>>position;
				game->mark_board(position);
				game->display_board();
			}
			if(game->get_winner() != "C") {cout<<game->get_winner()<<" wins! \n";}
			else {cout<<game->get_winner()<<". Tie!\n";}
			*game;
			games.save_game(game);
			
		}
		else if(size == 4) //tic_tac_toe_4
		{
			game = make_unique<tic_tac_toe_4>();
			game->start_game(first_player);
			game->display_board();

			while(!(game->game_over()))
			{
				cout<<"Where would you like to place (1-16)? ";
				cin>>position;
				game->mark_board(position);
				game->display_board();
			}

			if(game->get_winner() != "C") {cout<<game->get_winner()<<" wins! \n";}
			else {cout<<game->get_winner()<<". Tie!\n";}
			*game;
			games.save_game(game);
		}


		int x, o, t;
		games.get_winner_total(x, o, t);
		cout<<"X Wins: "<<x<<"\n";
		cout<<"O Wins: "<<o<<"\n";
		cout<<"Ties:   "<<t<<"\n";

		cout<<"Enter Y if you would like to see a display of previous games: \n";
		cin>>choice;
		if(choice == 'y' || choice == 'Y'){games.display_games();}

		cout<<"Enter Y if you would like to play again: \n";
		cin>>choice;

	} while(choice == 'y' || choice == 'Y');
	
	
	return 0;
}

