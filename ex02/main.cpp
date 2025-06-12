#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* ptr = &str;
    std::string& ref = str;

    std::cout << "Memory address of string:" << &str << std::endl;
    std::cout << "Memory address of pointer:" << ptr << std::endl;
    std::cout << "Memory address of reference:" << &ref << std::endl;

    std::cout << "Value of string:" << str << std::endl;
    std::cout << "Value of pointer:" << *ptr << std::endl;
    std::cout << "Value of reference:" << ref << std::endl;

    return (0);
}