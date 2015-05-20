#include <string>
#include "Coloseum.h"
#include "Bow.h"
#include "Spear.h"
#include "SwordAndShield.h"
#include "Gladiator.h"
#include "Weapon.h"

#include <iostream>
using namespace std;

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

void Coloseum::RemoveGladiator(std::string gladiatorName)
{
    list<Gladiator>::iterator iter;
    for (iter = listGladiators.begin(); iter != listGladiators.end(); ++iter)
    {
        if(iter->GetName().compare(gladiatorName) == 0)
        {
            listGladiators.erase(iter);
            break;
        }
    }
}

int Coloseum::MakeAFight(int gladiator1WeaponId, int gladiator2WeaponId){


    if (gladiator1WeaponId==1) // bow
    {
        if (gladiator2WeaponId==1) {
                return 0;
        }
        if (gladiator2WeaponId==2) {
            return 1;
        }

        if (gladiator2WeaponId==3) {
            return 2;
        }
    }
    if (gladiator1WeaponId==2) //spear
    {
        if (gladiator2WeaponId==1) {
                return 2;
        }
        if (gladiator2WeaponId==2) {
                return 0;
        }
        if (gladiator2WeaponId==3) {
                return 1;
        }
    }
    if (gladiator1WeaponId==3) //sword and shield
    {
        if (gladiator2WeaponId==1) {
                return 1;
        }
        if (gladiator2WeaponId==2) {
                return 2;
        }
        if (gladiator2WeaponId==3) {
                return 0;
        }
    }

    return -1;
};


