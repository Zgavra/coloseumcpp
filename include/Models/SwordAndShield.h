#ifndef SWORDANDSHIELD_H
#define SWORDANDSHIELD_H


#include <Weapon.h>
#include <string>

class SwordAndShield : public Weapon
{
    public:
        SwordAndShield();
        virtual ~SwordAndShield();
        int GetId();
        std::string GetWeaponName();
    protected:
    private:
};

#endif // SWORDANDSHIELD_H
