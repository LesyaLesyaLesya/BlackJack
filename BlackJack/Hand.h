#pragma once
#include <vector>
#include "Card.h"
#include <string>
#include <iostream>

class Hand
{
    //����������� ����� Hand, ������� ������������ ����� ��������� ����
protected:
    std::vector<Card*> m_hand; //��������� ����. ������ ��������� �� ������� ���� �ard

public:
    void Add(Card* addCard);
    void Clear();
    int GetTotal() const; //���������� ����� ����� ���� ����
};
