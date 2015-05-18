#include "Coloseum.h"
#include "Bow.h"
#include "Spear.h"
#include "SwordAndShield.h"

Coloseum::Coloseum()
{
    //ctor
    /*Bow bow;
    Spear spear;
    SwordAndShield swordAndShield;*/

    this->listWeapons.push_back(new Bow());
    this->listWeapons.push_back(new Spear());
    this->listWeapons.push_back(new SwordAndShield());
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

void Coloseum::AddGladiator(Gladiator gladiator)
{
    this->listGladiators.push_back(gladiator);
}
