#pragma once

#include "Deck.h"
#include "Dealer.h"
#include "Player.h"
#include <ctime>
#include <iostream>
#include <sstream>

class Game
{
public:
	Game();
	void StartMatch();
	~Game();

private:
	Deck deck;
	Dealer dealer;
	Player player;


};

