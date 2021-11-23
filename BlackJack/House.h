#pragma once
#include "GenericPlayer.h"


class  House : public GenericPlayer
{
public:
	House(const std::string& m_name = "House") : GenericPlayer(m_name) {};
	virtual ~House() {};

	virtual bool IsHitting() const; // ����� ���������, ����� �� ������ ��� ���� �����. ���� � ������ �� ������ 16 �����, �� �� ����� ��� ���� �����.
	void FlipFirstCard(); // ����� �������������� ������ ����� ������.
};

 
