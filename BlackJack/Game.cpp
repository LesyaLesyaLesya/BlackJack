#include "Game.h"
/*–еализовать класс Game, который представл€ет собой основной процесс игры.
” этого класса будет 3 пол€:
	колода карт
	рука дилера
	вектор игроков.
+ онструктор класса принимает в качестве параметра вектор имен игроков и создает объекты самих игроков.
+¬ конструкторе создаетс€ колода карт и затем перемешиваетс€.
+“акже класс имеет один метод play().
+¬ этом методе раздаютс€ каждому игроку по две стартовые карты, а перва€ карта дилера пр€четс€.
+ƒалее выводитс€ на экран информаци€ о картах каждого игра, в т.ч. и дл€ дилера.
+«атем раздаютс€ игрокам дополнительные карты. 
+ѕотом показываетс€ перва€ карта дилера и дилер набирает карты, если ему надо.
+ѕосле этого выводитс€ сообщение, кто победил, а кто проиграл. 
+¬ конце руки всех игроков очищаютс€.*/

Game::Game(std::vector<std::string>& playerNames)
{
	for (std::vector<std::string>::iterator iter = playerNames.begin(); iter != playerNames.end(); iter++)
	{
		players.push_back(Player(*iter));
	}

	srand(static_cast<unsigned int>(time(0)));
	cardDeck.Populate();
	cardDeck.Shuffle();

};

void Game::play()
{
	for (int i = 0; i < 2; i++)
	{
		for (std::vector<Player>::iterator iter = players.begin(); iter != players.end(); iter++)
		{
			cardDeck.Deal(*iter);
		}
		cardDeck.Deal(dillerHand);
	}
	dillerHand.FlipFirstCard();

	for (std::vector<Player>::iterator iter = players.begin(); iter != players.end(); iter++)
	{
		std::cout<< *iter;
	}
	std::cout << "\n" << dillerHand;


	for (std::vector<Player>::iterator iter = players.begin(); iter != players.end(); iter++)
	{
		cardDeck.AdditionalCards(*iter);
	}

	//ѕотом показываетс€ перва€ карта дилера и дилер набирает карты, если ему надо.
	dillerHand.FlipFirstCard();
	std::cout << "\n" << dillerHand;


	cardDeck.AdditionalCards(dillerHand);

	if (dillerHand.IsBoosted())
	{
		dillerHand.Bust();
		for (std::vector<Player>::iterator iter = players.begin(); iter != players.end(); iter++)
		{
			if (!iter->IsBoosted())
			{	
				iter->Win();
			}
		}
	}
	else
	{
		for (std::vector<Player>::iterator iter = players.begin(); iter != players.end(); iter++)
		{
			if (!(iter->IsBoosted()))
			{
				if (iter->GetTotal() > dillerHand.GetTotal())
				{
					iter->Win();
				}
				else if (iter->GetTotal() < dillerHand.GetTotal())
				{
					iter->Lose();
				}
				else
				{
					iter->Push();
				}
			}

		}
	}

	//¬ конце руки всех игроков очищаютс€
	for (std::vector<Player>::iterator iter = players.begin(); iter != players.end(); iter++)
	{
		iter->Clear();
	}
	dillerHand.Clear();
};

