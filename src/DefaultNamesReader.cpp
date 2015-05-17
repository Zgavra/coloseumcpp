#include "DefaultNamesReader.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iterator>
#include <list>
#include <string>

using namespace std;

DefaultNamesReader::DefaultNamesReader()
{
    /*std::ifstream infile("GladiatorNames.txt");
    std::string gladiatorName;
    while (infile >> gladiatorName)
    {
        NamesFromFile.push_back(gladiatorName);
    }*/

    ifstream myfile;
    string line;
    myfile.open ("E:\\GladiatorNames.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
          NamesFromFile.push_back(line);
        }
        myfile.close();
    }
}

DefaultNamesReader::~DefaultNamesReader()
{
    //dtor
}

std::string DefaultNamesReader::GetRandomGladiatorName()
{
    int randomNumber = rand() % NamesFromFile.size();
    std::list<std::string>::iterator it = NamesFromFile.begin();
    std::advance(it, randomNumber);
    return *it;
}
