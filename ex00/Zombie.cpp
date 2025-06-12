#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string input)
{
    name = input;
    Zombie::announce();
}

Zombie::~Zombie()
{
    std::cout << name
        << " has been destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *newZombie(std::string name)
{
    Zombie *zom;
    zom = new Zombie(name);
    return (zom);
}

void randomChump(std::string name)
{
    Zombie zom(name);
    zom.announce();
}