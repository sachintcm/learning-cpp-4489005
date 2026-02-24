// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cout << "Enter you name \n" << std::flush;
    std::cin >> str;
    std::cout << "Nice to meet you " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;

    return 0;

}