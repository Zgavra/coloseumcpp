#ifndef BOW_H
#define BOW_H

#include <Weapon.h>
#include <string>


class Bow : public Weapon
{
    public:
        Bow();
        virtual ~Bow();
        int GetId();
        std::string GetWeaponName();
    protected:
    private:
};

#endif // BOW_H
