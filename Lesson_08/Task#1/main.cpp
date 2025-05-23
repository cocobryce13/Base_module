#include <iostream>
#include <string>
#include <windows.h>

int function(std::string str, int forbidden_length)
{
    int tmp = static_cast<int>(str.length());
    if (tmp != forbidden_length)
    {
        return tmp;
    }

    throw "bad_length";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string str;
    int forbidden_length = 0;

    std::cout << "Enter the prohibited length:";
    std::cin >> forbidden_length;
    std::cout << "Enter a word:";
    std::cin >> str;

    try
    {
        int res = function(str, forbidden_length);
        std::cout << "Word length " << str << " equals " << res << "." << std::endl;
    }

    catch (const char* message)
    {
        std::cout << message;
    }

}