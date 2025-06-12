#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{}

Zombie::Zombie(std::string input)
{
    name = input;
}

Zombie::~Zombie()
{
    std::cout << name
        << " has been destroyed" << std::endl;
}

void Zombie::setName(std::string input)
{
    name = input;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
