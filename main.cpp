#include <iostream>
#include <fstream>
#include <sstream>

#include "Coloseum.h"
#include "DefaultNamesReader.h"

using namespace std;

void Initialize(Coloseum* coloseum);
void Uninitialize(Coloseum coloseum);
void AddGladiator(Coloseum* coloseum, DefaultNamesReader defaultNamesReader);
void RemoveGladiator(Coloseum* coloseum);
void MakeAFight(Coloseum coloseum);

int main()
{
    Coloseum coloseum;
    int selectedOption;
    DefaultNamesReader defaultNamesReader;

    Initialize(&coloseum);

    cout << " Welcome to coloseum!" << endl;

    while(true)
    {
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
                AddGladiator(&coloseum, defaultNamesReader);
                break;
            }
        case(2):
            {
                RemoveGladiator(&coloseum);
                break;
            }
        case(3):
            {
                MakeAFight(coloseum);
                break;
            }
        case(4):
            {
                Uninitialize(coloseum);
                cout <<"Goodbye" << endl;
                return 0;
            }
        default:
            break;
        }

    }

    return 0;
}

void Initialize(Coloseum* coloseum)
{
    std::string line;
    std::ifstream myfile;
    myfile.open ("include\\Resources\\AllGladiators.txt");
    if (myfile.is_open())
    {
        while ( getline(myfile, line) )
        {
            std::string gladiatorName = line;
            if(getline(myfile, line))
            {
                int weaponId;
                std::istringstream ( line ) >> weaponId;

                bool continueLoop = true;
                while(continueLoop)
                {
                    std::list<Weapon*> listWeapons = coloseum->GetAllWeapons();  //samo jednom traziti listu, da se iterator ne zabuni
                    list<Weapon*>::const_iterator iter;
                    for (iter = listWeapons.begin(); iter != listWeapons.end(); ++iter)
                    {
                        if((*iter)->GetId() == weaponId)
                        {
                            Gladiator gladiator(gladiatorName, (*iter));
                            coloseum->AddGladiator(gladiator);
                            continueLoop = false;
                            break;
                        }
                    }
                }
            }
            else
            {
                continue;
            }
        }

        myfile.close();
    }
    else
    {
        cout << "Unable to open file";
    }
}

void Uninitialize(Coloseum coloseum)
{
    ofstream myfile;
    myfile.open ("include\\Resources\\AllGladiators.txt");

    std::list<Gladiator> gladiators = coloseum.GetAllGladiators();  //samo jednom traziti listu, da se iterator ne zabuni
    list<Gladiator>::iterator iter;
    for (iter = gladiators.begin(); iter != gladiators.end(); ++iter)
    {
        myfile << iter->GetName();
        myfile << "\n";
        myfile << iter->GetWeapon()->GetId();
        myfile << "\n";
    }

    myfile.close();
}

void AddGladiator(Coloseum* coloseum, DefaultNamesReader defaultNamesReader)
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
    std::list<Weapon*> listWeapons = coloseum->GetAllWeapons();  //samo jednom traziti listu, da se iterator ne zabuni
    list<Weapon*>::const_iterator iter;
    for (iter = listWeapons.begin(); iter != listWeapons.end(); ++iter)
    {
        cout << (*iter)->GetId() << ". " << (*iter)->GetWeaponName() << endl;
    }

    Weapon* chosenWeapon;
    bool continueLoop = true;
    while(continueLoop)
    {
        int weaponId;
        cin >> weaponId;

        list<Weapon*>::const_iterator iter;
        for (iter = listWeapons.begin(); iter != listWeapons.end(); ++iter)
        {
            if((*iter)->GetId() == weaponId)
            {
                chosenWeapon = (*iter);
                continueLoop = false;
                break;
            }
        }
    }

    Gladiator gladiator(gladiatorName, chosenWeapon);
    coloseum->AddGladiator(gladiator);
}

void RemoveGladiator(Coloseum* coloseum)
{
    cout << "Remove Gladiator: " << endl;
    std::list<Gladiator> gladiators = coloseum->GetAllGladiators();  //samo jednom traziti listu, da se iterator ne zabuni
    list<Gladiator>::iterator iter;
    for (iter = gladiators.begin(); iter != gladiators.end(); ++iter)
    {
        cout << iter->GetName() << endl;
    }

    std::string gladiatorName;
    cout << "Enter gladiator name:" << endl;
    getline(cin, gladiatorName);
    getline(cin, gladiatorName);

    coloseum->RemoveGladiator(gladiatorName);
}

void MakeAFight(Coloseum coloseum)
{
    cout << "Choose first gladiator: " << endl;
    std::list<Gladiator> gladiators = coloseum.GetAllGladiators();  //samo jednom traziti listu, da se iterator ne zabuni
    list<Gladiator>::iterator iter;
    for (iter = gladiators.begin(); iter != gladiators.end(); ++iter)
    {
        cout << iter->GetName() << endl;
    }

    std::string gladiator1Name;
    int gladiator1WeaponId;
    bool continueLoop = true;
    while(continueLoop)
    {
        cout << "Enter gladiator name:" << endl;
        getline(cin, gladiator1Name);
        getline(cin, gladiator1Name);

        for (iter = gladiators.begin(); iter != gladiators.end(); ++iter)
        {
            if(iter->GetName().compare(gladiator1Name) == 0)
            {
                gladiator1WeaponId = iter->GetWeapon()->GetId();
                continueLoop = false;
                break;
            }
        }
    }

    cout << "Choose second gladiator: " << endl;
    for (iter = gladiators.begin(); iter != gladiators.end(); ++iter)
    {
        if(iter->GetName().compare(gladiator1Name) != 0)
        {
            cout << iter->GetName() << endl;
        }
    }

    std::string gladiator2Name;
    int gladiator2WeaponId;
    continueLoop = true;
    while(continueLoop)
    {
        cout << "Enter gladiator name:" << endl;
        getline(cin, gladiator2Name);

        for (iter = gladiators.begin(); iter != gladiators.end(); ++iter)
        {
            if(iter->GetName().compare(gladiator1Name) != 0)
            {
                if(iter->GetName().compare(gladiator2Name) == 0)
                {
                    gladiator2WeaponId = iter->GetWeapon()->GetId();
                    continueLoop = false;
                    break;
                }
            }
        }
    }

    coloseum.MakeAFight(gladiator1WeaponId, gladiator2WeaponId);
}
