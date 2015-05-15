#ifndef SWORDANDSHIELD_H
#define SWORDANDSHIELD_H


#include <Weapon.h>
#include <string>

class SwordAndShield : public Weapon
{
    public:
        SwordAndShield(std::string weaponName, int weaponId);
        virtual ~SwordAndShield();
        int GetId();
    protected:
    private:
};

#endif // SWORDANDSHIELD_H
