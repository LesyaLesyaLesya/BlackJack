#include "Player.h"
bool Player::IsHitting() const { return (GetTotal() < 16); }

void Player:: Win() const
{
	std::cout << "����� " << name << " �������";
}
void Player::Lose() const
{
	std::cout << "����� " << name << " ��������";
}
void Player::Push() const
{
	std::cout << "����� " << name << " ������ ������";
}