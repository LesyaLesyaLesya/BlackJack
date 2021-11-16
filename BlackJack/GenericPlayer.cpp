#include "GenericPlayer.h"


bool GenericPlayer::IsBoosted() {return (this->GetTotal() > 21); }
void GenericPlayer::Bust()
{
    std::cout << this->name << "!!!! Поздравляю, у Вас перебор";
}