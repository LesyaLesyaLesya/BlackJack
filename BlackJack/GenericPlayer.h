#pragma once
#include "Hand.h"

class GenericPlayer : public Hand
{
    /*��������� ��������� ������. �� �������� ����������� �������, � ���� �������� ��������,
    ����������� ��� ��� ������-��������, ��� � ��� ������-����������*/
    std::string name; //��� ������

public:
    GenericPlayer(std::string m_name) : name(m_name);
    ~GenericPlayer() {};

    virtual bool IsHitting() const = 0; //���������, ����� �� ������ ��� ���� �����. ������ ����������� �������
    bool IsBoosted(); //���������, ��� � ������ �������
    void Bust(); //���������, ��� � ������ �������

};

