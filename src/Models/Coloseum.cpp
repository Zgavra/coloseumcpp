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
void Coloseum::MakeAFight(int gladiator1WeaponId, int gladiator2WeaponId){


    if (gladiator1WeaponId==1) // bow
    {
        if (gladiator2WeaponId==1) {
                cout << "Gladiator1 VS Gladiator2: IT'S A TIE!"<< endl << endl;
        }
        if (gladiator2WeaponId==2) {
            cout << "Gladiator1 VS Gladiator2: Gladiator1 WINS"<< endl << endl;
        }

        if (gladiator2WeaponId==3) {
            cout << "Gladiator1 VS Gladiator2: Gladiator2 WINS"<< endl << endl;
        }
    }
    if (gladiator1WeaponId==2) //spear
    {
        if (gladiator2WeaponId==1) {
                cout << "Gladiator1 VS Gladiator2: Gladiator2 WINS"<< endl << endl;
        }
        if (gladiator2WeaponId==2) {
                cout << "Gladiator1 VS Gladiator2: IT'S A TIE!"<< endl << endl;
        }
        if (gladiator2WeaponId==3) {
                cout << "Gladiator1 VS Gladiator2: Gladiator1 WINS"<< endl << endl;
        }
    }
    if (gladiator1WeaponId==3) //sword and shield
    {
        if (gladiator2WeaponId==1) {
                cout << "Gladiator1 VS Gladiator2: Gladiator1 WINS!"<< endl << endl;
        }
        if (gladiator2WeaponId==2) {
                cout << "Gladiator1 VS Gladiator2: Gladiator2 WINS!"<< endl << endl;
        }
        if (gladiator2WeaponId==3) {
                cout << "Gladiator1 VS Gladiator2: IT'S A TIE!"<< endl << endl;
        }
    }
};


