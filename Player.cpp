#include "Player.h"


Player::Player()
{
}

char Player::Move()
{
	std::cout << "What action do you want to perform next? Hit(h)/Stand(s)/Double(d) ?" << std::endl;
	char a;
	cin >> a;
	return a;
}

int Player::GetAmount()
{
	hand.Amount();
}

Player::~Player()
{
	hand.ClearHand();
}
