#include <iostream>

int main ()
{
    std::cout << "Bitte geben Sie die Binaerzahl ein:" << std::endl;

    unsigned long int binary = 0;
    unsigned int decimal = 0;
    unsigned int multiplier = 1; //2^n, n ist # aktuellem Schleifendurchlaufs

    int exitCode = 0; //Fehlercode, standardmäßig bei 0 "kein Fehler";

    std::cin >> binary;

    while (binary > 0 && binary % 10 <= 1) //letzte Ziffer <= 1, also 0 OR 1
    {
        decimal += (binary % 10) * multiplier;

        binary /= 10;
        multiplier *= 2;
    }

    if (binary > 0)
    {
        std::cerr << "Fehler: Nur die Ziffern 0 und 1 sind zulaessig!" << std::endl;
        exitCode = 1;
    }
    else
    {
        std::cout << "Dezimaldarstellung: " << decimal << std::endl;
    } 

    return exitCode;
}