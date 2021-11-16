#pragma once
#include "GenericPlayer.h"

class Player : public GenericPlayer
{
public:
	Player(std::string& m_name) : GenericPlayer(m_name) {};
	virtual ~Player() {};

	virtual bool IsHitting() const; // ����� ���������, ����� �� ������ ��� ���� �����. ���� � ������ �� ������ 16 �����, �� �� ����� ��� ���� �����.
	void Win() const; //������� �� ����� ��� ������ � ���������, ��� �� �������.
	void Lose() const; //������� �� ����� ��� ������ � ���������, ��� �� ��������.
	void Push() const; // ������� �� ����� ��� ������ � ���������, ��� �� ������ ������.
private:

};

