#include "Zombie.hpp"
#include <iostream>

int main ()
{
    Zombie* horde;
    int N = 4;
    horde = zombieHorde(N, "Steve");
    for (int i = 0; i < N; i++)
    {
        std::cout << "Index[" << i << "]: ";
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}