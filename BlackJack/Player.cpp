#include "Player.h"
bool Player::IsHitting() const { return (GetTotal() < 16); }

void Player:: Win() const
{
	std::cout << "Игрок " << name << " выиграл";
}
void Player::Lose() const
{
	std::cout << "Игрок " << name << " проиграл";
}
void Player::Push() const
{
	std::cout << "Игрок " << name << " сыграл вничью";
}