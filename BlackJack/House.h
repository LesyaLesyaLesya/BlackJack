#pragma once
#include "GenericPlayer.h"

class  House : public GenericPlayer
{
public:
	House(std::string& m_name) : GenericPlayer(m_name) {};
	virtual ~House() {};

	virtual bool IsHitting() const; // ����� ���������, ����� �� ������ ��� ���� �����. ���� � ������ �� ������ 16 �����, �� �� ����� ��� ���� �����.
	void FlipFirstCard(); // ����� �������������� ������ ����� ������.
};

 
