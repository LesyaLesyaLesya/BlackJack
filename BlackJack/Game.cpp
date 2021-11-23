#include "Game.h"
/*����������� ����� Game, ������� ������������ ����� �������� ������� ����.
� ����� ������ ����� 3 ����:
	������ ����
	���� ������
	������ �������.
+����������� ������ ��������� � �������� ��������� ������ ���� ������� � ������� ������� ����� �������.
+� ������������ ��������� ������ ���� � ����� ��������������.
+����� ����� ����� ���� ����� play().
+� ���� ������ ��������� ������� ������ �� ��� ��������� �����, � ������ ����� ������ ��������.
+����� ��������� �� ����� ���������� � ������ ������� ����, � �.�. � ��� ������.
+����� ��������� ������� �������������� �����. 
+����� ������������ ������ ����� ������ � ����� �������� �����, ���� ��� ����.
+����� ����� ��������� ���������, ��� �������, � ��� ��������. 
+� ����� ���� ���� ������� ���������.*/

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

	//����� ������������ ������ ����� ������ � ����� �������� �����, ���� ��� ����.
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

	//� ����� ���� ���� ������� ���������
	for (std::vector<Player>::iterator iter = players.begin(); iter != players.end(); iter++)
	{
		iter->Clear();
	}
	dillerHand.Clear();
};

