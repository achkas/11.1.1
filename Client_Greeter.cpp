// Client_Greeter

#include <iostream>
#include <windows.h>
#include <string>
#include "Greeter.h"


int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Greeter::Greeter greeter;
    std::string name;
    
    std::cout << "Введите имя:";
    std::cin >> name;
    greeter.set_inc(name);
    std::cout << greeter.greet();

}
