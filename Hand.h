#pragma once

#include <vector>
#include "Card.h"

using namespace std;

class Hand
{
public:
	Hand();
	void Add(Card* card);
	void ClearHand();
	int Amount();
	bool HasAce();
	~Hand();

protected:
	vector<Card*> hand;
	vector<Card*>::iterator it = hand.begin();
};

