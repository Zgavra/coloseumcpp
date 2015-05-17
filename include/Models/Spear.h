#ifndef SPEAR_H
#define SPEAR_H

#include <Weapon.h>
#include <string>


class Spear : public Weapon
{
    public:
        Spear();
        virtual ~Spear();
        int GetId();
        std::string GetWeaponName();
    protected:
    private:
};

#endif // SPEAR_H
