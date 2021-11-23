#pragma once

#include "Hand.h"
#include "GenericPlayer.h"

class Deck : public Hand
{
public:
	Deck();
	~Deck() {}

	void Populate();		//������� ����������� ������ �� 52 ����, ���������� �� ������������.
	void Shuffle();			//�����, ������� ������ �����, ����� ������������ ������� �� ���������� STL random_shuffle
	void Deal(Hand& aHand); //�����, ������� ������� � ���� ���� �����
	void AdditionalCards(GenericPlayer& aGenericPlayer); //������� ������ �������������� ����� �� ��� ���, ���� �� ����� � ����� �� ��������

};


