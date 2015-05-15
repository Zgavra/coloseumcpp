#ifndef COLOSEUM_H
#define COLOSEUM_H
#include <list>

#include <Gladiator.h>



class Coloseum
{
    public:
        Coloseum();
        virtual ~Coloseum();
        std::list<Gladiator> GetAllGladiators();
    protected:
    private:
        std::list<Gladiator> listGladiators;
};

#endif // COLOSEUM_H
