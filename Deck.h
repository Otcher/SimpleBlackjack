#pragma once
#include "Hand.h"

class Deck : public Hand
{
public:
	Deck();

	void Shuffle();
	void PickACard(Hand& hand);
	void AddCards();

	~Deck();
};

