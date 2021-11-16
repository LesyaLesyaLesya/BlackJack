#include "E:\GEEK BRAINS C++\нно\BlackJack\BlackJack\BlackJack\Card.h"

Card::Card(Suits suit, CardValue value, bool position) : m_suit(suit), m_value(value), m_position(position) {}

void Card::Flip() { this->m_position = !(this->m_position);}

CardValue Card::GetValue() const { this->m_value; }
