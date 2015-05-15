#include "Bow.h"
#include <string>

Bow::Bow(std::string weaponName, int weaponId)
{
    //ctor
    this->weaponName = weaponName;
    this->weaponId = weaponId;
}

Bow::~Bow()
{
    //dtor
}

int Bow::GetId()
{
    return this->weaponId;
}
