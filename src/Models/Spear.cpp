#include "Spear.h"
#include <string>

Spear::Spear()
{
    //ctor
    this->weaponName = "Spear";
    this->weaponId = 2;
}

Spear::~Spear()
{
    //dtor
}

int Spear::GetId()
{
    return this->weaponId;
}

std::string Spear::GetWeaponName()
{
    return this->weaponName;
}
