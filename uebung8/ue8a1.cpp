#include <iostream>

int ggT(int zahler, int nenner)
{
    if (zahler < nenner) return ggT(nenner, zahler);

    if (nenner == 0) return zahler;

    return ggT(zahler % nenner, nenner); 
}

//Hilfsfunktion, gibt abs glaube auch in <cmath>
int abs(int number)
{
    if (number < 0) return -(number);

    return number;
}

void Kuerzen(int& zahler, int& nenner)
{
    int teiler = ggT(abs(zahler), abs(nenner));

    zahler /= teiler;
    nenner /= teiler;

    if (nenner < 0)
    {
        nenner *= -1;
        zahler *= -1;
    }

    return;
}

int main()
{
    int zahler = 0;
    int nenner = 0;

    std::cout << "Bitte geben Sie den Zaehler an: ";
    std::cin >> zahler;

    std::cout << "Bitte geben Sie den Nenner an (Division durch 0 beendet das Programm): ";
    std::cin >> nenner;

    while (nenner != 0)
    {
        Kuerzen(zahler, nenner); 

        std::cout << "Der gekürzte Bruch lautet " << zahler << "/" << nenner << std::endl;
        
        std::cout << "Bitte geben Sie den Zaehler an: ";
        std::cin >> zahler;

        std::cout << "Bitte geben Sie den Nenner an (Division durch 0 beendet das Programm): ";
        std::cin >> nenner;
    }
    
    
    return 0;
}