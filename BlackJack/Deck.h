#pragma once

#include "Hand.h"
#include "GenericPlayer.h"

class Deck : public Hand
{
public:
	Deck();
	~Deck() {}

	void Populate();		//Создает стандартную колоду из 52 карт, вызывается из конструктора.
	void Shuffle();			//Метод, который тасует карты, можно использовать функцию из алгоритмов STL random_shuffle
	void Deal(Hand& aHand); //метод, который раздает в руку одну карту
	void AdditionalCards(GenericPlayer& aGenericPlayer); //раздает игроку дополнительные карты до тех пор, пока он может и хочет их получать

};


