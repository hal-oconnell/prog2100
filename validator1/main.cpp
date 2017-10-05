#include <iostream>
#include <string>

int main()
{
    std::string str1 = "666";
    std::string str2 = "3.1415";
    std::string str3 = "12345 with extra stuff like words";
    std::string str4 = "words and 22";

    int myint1 = std::stoi(str1);
    int myint2 = std::stoi(str2);
    int myint3 = std::stoi(str3);
    //error: 'std::invalid_argument'
    int myint4 = std::stoi(str4);

    std::cout << "std::stoi(\"" << str1 << "\") is " << myint1 << '\n';
    std::cout << "std::stoi(\"" << str2 << "\") is " << myint2 << '\n';
    std::cout << "std::stoi(\"" << str3 << "\") is " << myint3 << '\n';
    std::cout << "std::stoi(\"" << str4 << "\") is " << myint4 << '\n';
}