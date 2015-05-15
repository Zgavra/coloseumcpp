#include "Coloseum.h"

Coloseum::Coloseum()
{
    //ctor

}

Coloseum::~Coloseum()
{
    //dtor
}
std::list<Gladiator> Coloseum::GetAllGladiators()
{
    return this->listGladiators;
}
