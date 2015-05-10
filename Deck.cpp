#include "Deck.h"
#include "Card.h"
#include <algorithm> 


Deck::Deck()
{
	hand.reserve(52);
	ClearHand();
	AddCards();
}

void Deck::Shuffle()
{
	std::random_shuffle(hand.begin(), hand.end());
}

void Deck::AddCards()
{
	for (int s = Card::CLUBS; s <= Card::SPADES; s++)
	{
		for (int r = Card::ACE; r <= Card::KING; r++)
		{
			this->Add(new Card((Card::rank)r, (Card::suit)s, false));
		}
	}
}

Deck::~Deck()
{
}
