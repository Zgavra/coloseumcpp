#include "Coloseum.h"
#include "Bow.h"
#include "Spear.h"
#include "SwordAndShield.h"

Coloseum::Coloseum()
{
    //ctor
    Bow bow;
    Spear spear;
    SwordAndShield swordAndShield;

    listWeapons.push_back(&bow);
    listWeapons.push_back(&spear);
    listWeapons.push_back(&swordAndShield);
}

Coloseum::~Coloseum()
{
    //dtor
}
std::list<Gladiator> Coloseum::GetAllGladiators()
{
    return this->listGladiators;
}

std::list<Weapon*> Coloseum::GetAllWeapons()
{
    return this->listWeapons;
}
