#pragma once

#include "Deck.h"
#include "Holder.h"
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
	//Dealer
	//Player


};

