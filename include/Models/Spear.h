#ifndef SPEAR_H
#define SPEAR_H

#include <Weapon.h>
#include <string>


class Spear : public Weapon
{
    public:
        Spear(std::string weaponName, int weaponId);
        virtual ~Spear();
        int GetId();
    protected:
    private:
};

#endif // SPEAR_H
