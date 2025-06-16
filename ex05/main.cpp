#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
        return (1);
    }
    Harl harl;
    std::cout << "[ " << argv[1] << " ]" << std::endl;
    harl.complain(argv[1]);
    return (0);
}