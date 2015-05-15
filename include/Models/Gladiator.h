#ifndef GLADIATOR_H
#define GLADIATOR_H
#include <string>
#include <Weapon.h>


class Gladiator
{
    public:
        Gladiator(std::string gladiatorName, Weapon *weapon);
        virtual ~Gladiator();
        std::string GetName();
        Weapon* GetWeapon();
    protected:
    private:
        std::string gladiatorName;
        Weapon *weapon;
};

#endif // GLADIATOR_H
