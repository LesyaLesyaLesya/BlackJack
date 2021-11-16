#include "House.h"

void House::FlipFirstCard()
{
	if (!m_hand.empty())
	{
		m_hand.at(0)->Flip();
	}
	else
	{
		std::cout << "���� ����...";
	}
}
bool House::IsHitting() const { return (GetTotal() < 16);}