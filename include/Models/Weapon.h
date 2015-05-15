#ifndef WEAPON_H
#define WEAPON_H
#include <string>


class Weapon
{
    public:
        Weapon();
        virtual ~Weapon();
        virtual int GetId() = 0;
    protected:
        std::string weaponName;
        int weaponId;
    private:
};

#endif // WEAPON_H
