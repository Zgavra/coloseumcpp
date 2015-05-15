#ifndef BOW_H
#define BOW_H

#include <Weapon.h>
#include <string>


class Bow : public Weapon
{
    public:
        Bow(std::string weaponName, int weaponId);
        virtual ~Bow();
        int GetId();
    protected:
    private:
};

#endif // BOW_H
