#include <iostream>

int main()
{
    int decimal = 0;

    //wiederverwendbare Eingabeaufforderung:
    std::string message = "Bitte geben Sie die umzurechnende Zahl ein (negative Zahl bricht Programm ab)";

    std::cout << message << std::endl;
    std::cin >> decimal;

    while (decimal >= 0) //wandelt um, bis Eingabe (kann auch erste sein) negativ ist
    {
        unsigned long int binary = 0;
        int position = 1; //Positionsmultiplikator, da Schema rückwärz aufgelöst/gelesen wird

        while (decimal > 0)
        {
            binary += (decimal % 2) * position; //1 an Position schreiben, falls ungerade

            position *= 10; //zu schreibende Position nach links verschieben
            decimal /= 2; //nach Schema ganzzahlig teilen 
        }
        std::cout << "Binaerdarstellung: " << binary << std::endl << message << std::endl;
        std::cin >> decimal;
    }

    std::cout << "Das Programm wird nun beendet" << std::endl;
    
    return 0;
}