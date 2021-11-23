#include "Deck.h"
#include "Card.h"
#include <algorithm>
Deck::Deck()
{
	Populate();
}


void Deck::Populate()
//Создает стандартную колоду из 52 карт, вызывается из конструктора.
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
//Метод, который тасует карты, можно использовать функцию из алгоритмов STL random_shuffle
{
	std::random_shuffle(m_hand.begin(), m_hand.end());
}

void Deck::Deal(Hand& aHand)
//метод, который раздает в руку одну карту
{
	if (!m_hand.empty())
	{
		aHand.Add(m_hand.back());
		m_hand.pop_back();
	}
	else
	{
		std::cout << "Колода пуста";
		return;
	}
}
void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
//раздает игроку дополнительные карты до тех пор, пока он может и хочет их получать
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