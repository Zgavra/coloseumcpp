#include <iostream>
#include "Coloseum.h"
#include "DefaultNamesReader.h"

using namespace std;

int main()
{
    Coloseum coloseum;
    int selectedOption;
    DefaultNamesReader defaultNamesReader;
    cout << " Welcome to coloseum!" << endl;

    while(selectedOption != 4)
    {
       // cout << " Welcome to coloseum!" << endl;
        cout <<" Please select one of the following options" << endl;
        cout <<" 1. Add Gladiator" << endl;
        cout <<" 2. Remove Gladiator" << endl;
        cout <<" 3. Make a fight" << endl;
        cout <<" 4. Exit" << endl;

        cin >> selectedOption;

        switch (selectedOption)
        {
        case(1):
            {
                std::string gladiatorName;
                cout << "Enter gladiator name:" << endl;
                getline(cin, gladiatorName);
                getline(cin, gladiatorName);
                if(gladiatorName.empty())
                {
                    gladiatorName = defaultNamesReader.GetRandomGladiatorName();
                    cout << "Generated gladiator name: " + gladiatorName << endl;
                }

                cout << "Choose weapon: " << endl;
                std::list<Weapon*> listWeapons = coloseum.GetAllWeapons();  //samo jednom traziti listu, da se iterator ne zabuni
                list<Weapon*>::const_iterator iter;
                for (iter = listWeapons.begin(); iter != listWeapons.end(); ++iter)
                {
                    cout << (*iter)->GetId() << ". " << (*iter)->GetWeaponName() << endl;
                }

                Weapon* chosenWeapon;
                while(true)
                {
                    int weaponId;
                    cin >> weaponId;

                    bool breakLoop = false;
                    list<Weapon*>::const_iterator iter;
                    for (iter = listWeapons.begin(); iter != listWeapons.end(); ++iter)
                    {
                        if((*iter)->GetId() == weaponId)
                        {
                            chosenWeapon = (*iter);
                            breakLoop = true;
                            break;
                        }
                    }

                    if(breakLoop)
                    {
                       break;
                    }
                }

                Gladiator gladiator(gladiatorName, chosenWeapon);
                coloseum.AddGladiator(gladiator);

                break;
            }
        case(2):
            {
                cout << "Remove Gladiator: " << endl;
                std::list<Gladiator> gladiators = coloseum.GetAllGladiators();  //samo jednom traziti listu, da se iterator ne zabuni
                list<Gladiator>::iterator iter;
                for (iter = gladiators.begin(); iter != gladiators.end(); ++iter)
                {
                    cout << iter->GetName() << endl;
                }

                break;
            }
        case(3):
            {
                break;
            }
        case(4):
            {
                cout <<"Goodbye" << endl;
                return 0;
            }
        default:
            break;
        }

    }

    return 0;
}

/*
void weaponToString(Weapon weapon) {  // function:
  std::cout << weapon::GetId() +" " + weapon::GetWeaponName();
}*/

