/*
**  Diese Version benutzt Funktionen, um die verschachtelten Schleifen
**  übersichtlicher zu gestalten
*/

#include <iostream>

int square_and_add_digits(int number)
{
    int squaredDigit = 0; //Hilfsvariable zum Aufsummieren

        do
        {
            squaredDigit += (number % 10) * (number % 10);  // quadriert letzte Ziffer
            number /= 10;                                   //"schneidet" letzte Ziffer ab

        } while (number > 0);                               //bis alle Ziffern abgeschnitten sind   

        number = squaredDigit;                              //zurück in Nummer geschrieben, falls Abbruchbedingung noch nicht erfüllt ist 
        return number;
}

int check_if_happy(int number)
{
    do
    {
        number = square_and_add_digits(number);

    } while (number != 1 && number != 4);                   //Abbruch, falls 1 (glücklich) oder 4(Glied der ungl. Zahlenfolge) erkannt wird

    return number;
}

int main()
{
    //Schleife für alle Zahlen von 1 bis 500:
    for (int i = 1; i <= 500; ++i)
    {
        int number = i;     //i darf nicht verändert werden, daher Hilfsvariable

        number = check_if_happy(number);

        if (number == 1) std::cout << i << std::endl;           // Wenn Glücklich, dann wird untersuchte Zahl ausgegeben
    }

    return 0;
}