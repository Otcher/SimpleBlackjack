#pragma once

#include "Hand.h"

class Dealer
{
public:
	Dealer();
	int GetAmount();
	~Dealer();
private:
	Hand hand;
};

