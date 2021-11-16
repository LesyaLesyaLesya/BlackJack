#pragma once
#include "Hand.h"

class GenericPlayer : public Hand
{
    /*Обобщенно описывает игрока. Не является полноценным игроком, а лишь содержит элементы,
    характерные как для игрока-человека, так и для игрока-компьютера*/
    std::string name; //Имя игрока

public:
    GenericPlayer(std::string m_name) : name(m_name);
    ~GenericPlayer() {};

    virtual bool IsHitting() const = 0; //Указывает, нужна ли игроку еще одна карта. Чистая виртуальная функция
    bool IsBoosted(); //Указывает, что у игрока перебор
    void Bust(); //Объявляет, что у игрока перебор

};

