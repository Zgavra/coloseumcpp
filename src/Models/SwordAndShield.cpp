#include "SwordAndShield.h"
#include <string>

SwordAndShield::SwordAndShield()
{
    //ctor
    this->weaponName = "Sword and shield";
    this->weaponId = 3;
}

SwordAndShield::~SwordAndShield()
{
    //dtor
}

int SwordAndShield::GetId()
{
    return this->weaponId;
}

std::string SwordAndShield::GetWeaponName()
{
    return this->weaponName;
}
