#include "Harl.hpp"
#include <iostream>

static int levelIndex(const std::string& level)
{
    const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            return (i);
    }
    return (-1);
}

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::complain(std::string level)
{
    int index = levelIndex(level);
    void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    switch (index)
    {
    case 0:
    case 1:
    case 2:
    case 3:
        (this->*functions[index])();
        break;
    
    default:
        std::cout << "Probably complaining about insignificant problems" << std::endl;
    }
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}