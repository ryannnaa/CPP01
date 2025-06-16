#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
    : name(name), weapon(weapon)
{}

HumanA::~HumanA()
{}

void HumanA::attack()
{
    const std::string& attack = HumanA::weapon.getType();
    std::cout << "HumanA: " << "Attack with "
        << attack << std::endl;
}