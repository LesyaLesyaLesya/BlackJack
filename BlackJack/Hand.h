#pragma once
#include <vector>
#include "Card.h"
#include <string>
#include <iostream>

class Hand
{
    //Реализовать класс Hand, который представляет собой коллекцию карт
protected:
    std::vector<Card*> m_hand; //Коллекция карт. Хранит указатели на объекты типа Сard

public:
    void Add(Card* addCard);
    void Clear();
    int GetTotal() const; //Возвращает сумму очков карт руки
};
