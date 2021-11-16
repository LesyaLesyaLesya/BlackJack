#pragma once
#include <iostream>



enum  Suits
{
    SPADES, //����
    DIAMONDS, //�����
    HEARTS,//�����
    CLUBS, //�����

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
    bool        m_position; //���������, ��� ����������� ����� � ����� ����� ��� ��������. ������ �� ��, ������������ ��� ��� ���

public:
    Card(Suits suit, CardValue value, bool position);
    ~Card() {};

    void Flip(); //�������������� �����. ����� �������������� ��� ����, ����� ����������� ����� ����� ����� ��� ����
    CardValue  GetValue() const; //���������� �������� �����

    //���������� ��������� ������ ��� ������ Card. 
    // ���� ����� ����������� �������� ����� (�� �� �� �����), ������� ��,
    //  ���� �� �� �����, ������� ����� � ������� �����.
    // ����� ��� ������ GenericPlayer �������� ���������� ��������� ������, ������� ������ ���������� ��� 
    //������ � ��� �����, � ����� ����� ����� ����� ��� ����
    friend std::ostream& operator<< (std::ostream& os, const Card& m_card);
};