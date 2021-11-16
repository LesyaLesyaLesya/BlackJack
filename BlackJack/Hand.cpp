#include "Hand.h"
#include <iostream>

void Hand::Add(Card* addCard) { m_hand.push_back(addCard); }
void Hand::Clear() { m_hand.clear(); }
int  Hand::GetTotal() const
{

    int sum{ 0 };
    int aces{ 0 };

    for (int i = 0; i < m_hand.size(); i++)
    {
        if (m_hand[i]->GetValue() == ACE) { aces++; }
        sum += m_hand[i]->GetValue();

    }

    while (aces > 0 && sum <= 11)
    {
        sum += 10;
        aces--;
    }
    return sum;
}

