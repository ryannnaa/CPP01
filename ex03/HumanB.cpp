#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
    : name(name), weapon(NULL)
{}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (weapon)
    {
        const std::string& attack = weapon->getType();
        std::cout << "HumanB: " << "Attack with "
            << attack << std::endl;
    }
    else
        std::cout << "HumanB: No weapon, attack with hand" << std::endl;
}