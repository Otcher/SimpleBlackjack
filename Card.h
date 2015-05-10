#pragma once

class Card
{
public:
	enum rank {
		ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
		JACK, QUEEN, KING
	};
	enum suit { CLUBS, DIAMONDS, HEARTS, SPADES };

	Card(rank cr, suit cs, bool faceup);
	void Flip();
	int CardValue();
private:
	rank cr;
	suit cs;
	bool faceup;

};

