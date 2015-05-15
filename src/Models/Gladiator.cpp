#include "Gladiator.h"
#include <string>

Gladiator::Gladiator(std::string gladiatorName, Weapon *weapon)
{
    //ctor
    this->gladiatorName = gladiatorName;
    this->weapon = weapon;
}

Gladiator::~Gladiator()
{
    //dtor
}
std::string Gladiator::GetName()
{
    return this->gladiatorName;
}

Weapon* Gladiator::GetWeapon()
{
    return this->weapon;

}

