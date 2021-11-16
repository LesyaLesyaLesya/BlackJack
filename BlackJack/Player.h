#pragma once
#include "GenericPlayer.h"

class Player : public GenericPlayer
{
public:
	Player(std::string& m_name) : GenericPlayer(m_name) {};
	virtual ~Player() {};

	virtual bool IsHitting() const; // метод указывает, нужна ли дилеру еще одна карта. Если у дилера не больше 16 очков, то он берет еще одну карту.
	void Win() const; //выводит на экран имя игрока и сообщение, что он выиграл.
	void Lose() const; //выводит на экран имя игрока и сообщение, что он проиграл.
	void Push() const; // выводит на экран имя игрока и сообщение, что он сфграл вничью.
private:

};

