#include<iostream>
#include<string>

int main ()
{
    float piAnswer = 0.0;
    std::cout << "Geben Sie Pi mit den ersten zwei Ziffern an:" << std::endl;
    std::cin >> piAnswer;

    short int bitAnswer = 8;
    std::cout << "Wie viele Bit hat der \"Char\"-Datentyp??" <<std::endl;
    std::cin >> bitAnswer;

    std::string nameAnswer = "";
    std::cout << "Wie heissen Sie?";
    std::cin >> nameAnswer;
    return 0;
}