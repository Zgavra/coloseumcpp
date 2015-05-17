#include <iostream>
#include "Coloseum.h"
#include "DefaultNamesReader.h"

using namespace std;

int main()
{
    Coloseum coloseum();
    int selcetedOption;
    std::string gladiatorName;
    DefaultNamesReader defaultNamesReader;

    while(selcetedOption != 4)
    {
        cout << " Welcome to coloseum!" << endl;
        cout <<" Please select one of the following options" << endl;
        cout <<" 1. Add Gladiator" << endl;
        cout <<" 2. Remove Gladiator" << endl;
        cout <<" 3. Make a fight" << endl;
        cout <<" 4. Exit" << endl;

        cin >> selcetedOption;

        switch (selcetedOption)
        {
        case(1):
            {
                cout << "Enter gladiator name:" << endl;
                getline(cin, gladiatorName);
                getline(cin, gladiatorName);
                if(gladiatorName.empty())
                {
                    gladiatorName = defaultNamesReader.GetRandomGladiatorName();
                }
                cout << gladiatorName << endl;
                break;
            }
        case(2):
            {
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

