#include "Weapon.hpp"

Weapon::Weapon(std::string input)
{
    type = input;
}

Weapon::~Weapon()
{}

void Weapon::setType(const std::string input)
{
    type = input;
}

const std::string& Weapon::getType() const
{
    const std::string& ref = type;
    return (ref);
}
