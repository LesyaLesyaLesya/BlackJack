#pragma once
#include "Hand.h"


class GenericPlayer : public Hand
{
    /*��������� ��������� ������. �� �������� ����������� �������, � ���� �������� ��������,
    ����������� ��� ��� ������-��������, ��� � ��� ������-����������*/
protected:

    std::string name; //��� ������

public:
    GenericPlayer(std::string& m_name) : name(m_name) {};
    virtual ~GenericPlayer() {};

    virtual bool IsHitting() const = 0; //���������, ����� �� ������ ��� ���� �����. ������ ����������� �������
    bool IsBoosted(); //���������, ��� � ������ �������
    void Bust(); //���������, ��� � ������ �������
     
    //��� ������ GenericPlayer ���������� ��������� ������, ������� ������ ���������� ��� 
    //������ � ��� �����, � ����� ����� ����� ����� ��� ����
    friend std::ostream& operator<< (std::ostream& os, const GenericPlayer& m_GenericPlayer);
};

