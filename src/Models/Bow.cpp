#include "Bow.h"
#include <string>

Bow::Bow()
{
    //ctor
    this->weaponName = "Bow and arrow";
    this->weaponId = 1;
}

Bow::~Bow()
{
    //dtor
}

int Bow::GetId()
{
    return this->weaponId;
}

std::string Bow::GetWeaponName()
{
    return this->weaponName;
}
