#ifndef SED_HPP
#define SED_HPP

#include <string>

class Sed
{
private:
    std::string fileName;
    std::string search;
    std::string replace;
    std::string replaceAll(const std::string& input) const;
public:
    Sed(std::string file, std::string s1, std::string s2);
    ~Sed();
    void findnReplace();
};


#endif