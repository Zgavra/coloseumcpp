#include "SwordAndShield.h"
#include <string>

SwordAndShield::SwordAndShield(std::string weaponName, int weaponId)
{
    //ctor
    this->weaponName = weaponName;
    this->weaponId = weaponId;
}

SwordAndShield::~SwordAndShield()
{
    //dtor
}

int SwordAndShield::GetId()
{
    return this->weaponId;
}
