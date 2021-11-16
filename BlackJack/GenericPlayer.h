#pragma once
#include "Hand.h"


class GenericPlayer : public Hand
{
    /*Обобщенно описывает игрока. Не является полноценным игроком, а лишь содержит элементы,
    характерные как для игрока-человека, так и для игрока-компьютера*/
protected:

    std::string name; //Имя игрока

public:
    GenericPlayer(std::string& m_name) : name(m_name) {};
    virtual ~GenericPlayer() {};

    virtual bool IsHitting() const = 0; //Указывает, нужна ли игроку еще одна карта. Чистая виртуальная функция
    bool IsBoosted(); //Указывает, что у игрока перебор
    void Bust(); //Объявляет, что у игрока перебор
     
    //для класса GenericPlayer перегрузка оператора вывода, который должен отображать имя 
    //игрока и его карты, а также общую сумму очков его карт
    friend std::ostream& operator<< (std::ostream& os, const GenericPlayer& m_GenericPlayer);
};

