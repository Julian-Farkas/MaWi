#include <iostream>

int log2(int number)
{
    int log = 0;

    while (number > 1) //da 2^0 = 1
    {
        number /= 2;
        log++;
    }

    return log;
}

int pot2(int number)
{
    int pot = 1;
    
    while (number >= pot * 2)
    {
        pot *= 2;
    }

    return pot;
}

int log2pot2(int number)
{
    return log2(pot2(number));
}

int main()
{
    std::string message = "Bitte geben Sie eine Zahl ein (0 beendet das Programm):";
    int userInput = 1;

    std::cout << message << std::endl;

    std::cin >> userInput;

    while (userInput)
    {
        std::cout << "Logarithmus zur Basis 2: " << log2(userInput) << std::endl 
        << "groesste Zweierpotenz:\t " << pot2(userInput) << std::endl 
        << "log2( 2^x ): \t\t " << log2pot2(userInput) << std::endl;

        std::cout << message << std::endl;

        std::cin >> userInput;
    }

    return 0;
}