#include "Card.h"


Card::Card(rank cr, suit cs, bool faceup)
{
	this->cr = cr;
	this->cs = cs;
	this->faceup = faceup;
}

void Card::Flip()
{
	faceup = !faceup;
}

int Card::CardValue()
{
	int val = 0;
	if (faceup)
	{
		val = cr;
		if (cr > 10)
			val = 10;
	}
	return val;
}
