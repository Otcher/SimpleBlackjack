#pragma once

#include "Card.h"

class Holder
{
public:
	Holder();
	~Holder();

protected:
	Card hand[10];
	int sum = 0;
};

