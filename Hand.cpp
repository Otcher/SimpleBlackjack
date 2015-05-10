#include "Hand.h"


Hand::Hand()
{
	hand.reserve(10);
}

void Hand::Add(Card* card)
{
	hand.push_back(card);
}

void Hand::ClearHand()
{
	for (it = hand.begin();it != hand.end(); it++)
	{
		delete *it;
		*it = 0;
	}
	hand.clear();
}

int Hand::Amount()
{
	if (hand[0]->CardValue() == 0)
	{
		return 0;
	}

	int sum = 0;
	for (it = hand.begin(); it != hand.end(); it++)
	{
		sum += (*it)->CardValue();
	}

	if (HasAce() && sum <= 11)
	{
		sum += 10;
	}

	return sum;
}

bool Hand::HasAce()
{
	for (it = hand.begin(); it != hand.end(); it++)
	{
		if ((*it)->CardValue() == Card::ACE)
		{
			return true;
		}
	}
	return false;
}

Hand::~Hand()
{
	ClearHand();
}
