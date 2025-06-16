#include "Sed.hpp"
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <search> <replace>" << std::endl;
        return (1);
    }
    Sed sed(argv[1], argv[2], argv[3]);
    sed.findnReplace();
    return (0);
}