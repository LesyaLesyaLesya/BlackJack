#pragma once

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

};