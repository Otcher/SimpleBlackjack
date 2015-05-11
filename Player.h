#pragma once

#include "Hand.h"
#include <iostream>

class Player
{
public:
	Player();
	char Move();
	int GetAmount();
	~Player();

private:
	Hand hand;

};

