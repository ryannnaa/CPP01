#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string input);
    ~Zombie();
    void setName(std::string input);
    void announce();
};

Zombie *zombieHorde(int N, std::string name);

#endif