#include "Card.h"


Card::Card(Suits suit, CardValue value, bool position) : m_suit(suit), m_value(value), m_position(position) {}

void Card::Flip() { this->m_position = !(this->m_position);}

CardValue Card::GetValue() const { return this->m_value; }

std::ostream& operator<< (std::ostream& os, const Card& m_card)
{
	//Коды ASCII для пики, бубны, черви, крести теперь '\5', '\4', '\3', '\6'
	if (!m_card.m_position)//рубашкой вверх
	{
		os << "ХХ";
	}
	else
	{
		switch (m_card.m_suit)
		{
		case SPADES: os << '\5'; break;//пики

		case DIAMONDS: os << '\4'; break;//бубны

		case HEARTS: os << '\3'; break;//черви

		case CLUBS: os << '\6'; break;//крести

		default: return os;
		}
		
	}
	return os;
} 