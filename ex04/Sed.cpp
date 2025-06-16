#include "Sed.hpp"
#include <iostream>
#include <fstream>

Sed::Sed(std::string file, std::string s1, std::string s2)
    : fileName(file), search(s1), replace(s2)
{}

Sed::~Sed()
{}

void Sed::findnReplace()
{
    std::ifstream infile(fileName.c_str());
    if (!infile)
    {
        std::cerr << "Error: Cannot open infile " << fileName << std::endl;
        return ;
    }
    std::ofstream outfile((fileName + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "Error: Cannot create outfile" << std::endl;
        return ;
    }

    std::string line;
    while (std::getline(infile, line))
    {
        outfile << replaceAll(line) << '\n';
    }

    infile.close();
    outfile.close();
}

std::string Sed::replaceAll(const std::string& input) const
{
    std::string result = input;
    size_t pos = 0;

    while ((pos = result.find(search, pos)) != std::string::npos)
    {
        result.erase(pos, search.length());
        result.insert(pos, replace);
        pos += replace.length();
    }
    return (result);
}
