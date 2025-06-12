#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string input);
    ~Weapon();
    void setType(const std::string input);
    const std::string& getType() const;
};

#endif