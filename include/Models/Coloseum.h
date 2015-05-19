#ifndef COLOSEUM_H
#define COLOSEUM_H
#include <list>
#include <map>

#include <Gladiator.h>



class Coloseum
{
    public:
        Coloseum();
        virtual ~Coloseum();
        std::list<Gladiator> GetAllGladiators();
        std::list<Weapon*> GetAllWeapons();
        void AddGladiator(Gladiator gladiator);
        void RemoveGladiator(std::string gladiatorName);
        void MakeAFight(int gladiator1WeaponId, int gladiator2WeaponId);

    protected:
    private:
        std::list<Gladiator> listGladiators;
        std::list<Weapon*> listWeapons;

};

#endif // COLOSEUM_H
