#pragma once
#include <iostream>



enum  Suits
{
    SPADES, //пики
    DIAMONDS, //бубны
    HEARTS,//черви
    CLUBS, //трефы

};

enum CardValue
{
    ACE = 1,
    TWO = 2,
    THREE = 3,
    FOUR = 4,
    FIVE = 5,
    SIX = 6,
    SEVEN = 7,
    EIGHT = 8,
    NINE = 9,
    TEN = 10,
    JACK = 10,
    QUEEN = 10,
    KING = 10

};


class Card
{
 
    Suits       m_suit;
    CardValue   m_value;
    bool        m_position; //Указывает, как расположена карта — вверх лицом или рубашкой. Влияет на то, отображается она или нет

public:
    Card(Suits suit, CardValue value, bool position);
    ~Card() {};

    void Flip(); //Переворачивает карту. Может использоваться для того, чтобы перевернуть карту лицом вверх или вниз
    CardValue  GetValue() const; //Возвращает значение карты

    //Перегрузка оператора вывода для класса Card. 
    // Если карта перевернута рубашкой вверх (мы ее не видим), вывести ХХ,
    //  если мы ее видим, вывести масть и номинал карты.
    // Также для класса GenericPlayer написать перегрузку оператора вывода, который должен отображать имя 
    //игрока и его карты, а также общую сумму очков его карт
    friend std::ostream& operator<< (std::ostream& os, const Card& m_card);
};