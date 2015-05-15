#include "Spear.h"
#include <string>

Spear::Spear(std::string weaponName, int weaponId)
{
    //ctor
    this->weaponName = weaponName;
    this->weaponId = weaponId;
}

Spear::~Spear()
{
    //dtor
}

int Spear::GetId()
{
    return this->weaponId;
}
