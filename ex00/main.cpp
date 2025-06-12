#include "Zombie.hpp"
#include <iostream>

int main ()
{
    Zombie* z1 = newZombie("zom1");
    Zombie* z2 = newZombie("zom2");
    Zombie z3("zom3");
    Zombie z4("zom4");
    delete (z1);
    delete (z2);
    return (0);
}