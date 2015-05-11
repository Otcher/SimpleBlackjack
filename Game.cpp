#include "Game.h"


Game::Game()
{
	srand((unsigned int)time(0));

	deck.AddCards();
	deck.Shuffle();
}

void Game::StartMatch()
{
	std::cout << "\t\t\tWelcome to SimpleBlackjack" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Please enter your name: " ;

	string name;
	getline(cin, name);

	

}

Game::~Game()
{
}
