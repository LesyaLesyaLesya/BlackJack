#include "GenericPlayer.h"



bool GenericPlayer::IsBoosted() {return (this->GetTotal() > 21); }
void GenericPlayer::Bust()
{
    std::cout << this->name << "!!!! Поздравляю, у Вас перебор";
}

std::ostream& operator<< (std::ostream& os, const GenericPlayer& m_GenericPlayer)
{
    os << m_GenericPlayer.name; //доделаю...
    return os;
}