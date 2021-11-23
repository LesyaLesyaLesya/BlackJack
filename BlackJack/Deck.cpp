#include "Deck.h"
#include "Card.h"
#include <algorithm>
Deck::Deck()
{
	Populate();
}


void Deck::Populate()
//������� ����������� ������ �� 52 ����, ���������� �� ������������.
{
	for  (int suit = SPADES; suit  <= CLUBS; suit++)
	{
		for (int cardVal = ACE; cardVal < KING; cardVal++)
		{
			Add(new Card(static_cast<Suits>(suit), static_cast<CardValue>(cardVal), false));
		}

	}
}


void Deck::Shuffle()
//�����, ������� ������ �����, ����� ������������ ������� �� ���������� STL random_shuffle
{
	std::random_shuffle(m_hand.begin(), m_hand.end());
}

void Deck::Deal(Hand& aHand)
//�����, ������� ������� � ���� ���� �����
{
	if (!m_hand.empty())
	{
		aHand.Add(m_hand.back());
		m_hand.pop_back();
	}
	else
	{
		std::cout << "������ �����";
		return;
	}
}
void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
//������� ������ �������������� ����� �� ��� ���, ���� �� ����� � ����� �� ��������
{
	while (!aGenericPlayer.IsBoosted() && aGenericPlayer.IsHitting())
	{
		

		Deal(aGenericPlayer);

		if (aGenericPlayer.IsBoosted())
		{
			aGenericPlayer.Bust();
		}
	}

}