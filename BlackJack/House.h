#pragma once
#include "GenericPlayer.h"


class  House : public GenericPlayer
{
public:
	House(const std::string& m_name = "House") : GenericPlayer(m_name) {};
	virtual ~House() {};

	virtual bool IsHitting() const; // метод указывает, нужна ли дилеру еще одна карта. Если у дилера не больше 16 очков, то он берет еще одну карту.
	void FlipFirstCard(); // метод переворачивает первую карту дилера.
};

 
