#include <iostream>

int main()
{
    //Schleife für alle Zahlen von 1 bis 500:
    for (int i = 1; i <= 500; ++i)
    {
        int number = i;     //i darf nicht verändert werden, daher Hilfsvariable

        do
        {
            int squaredDigit = 0; //Hilfsvariable zum Aufsummieren

            do
            {
                squaredDigit += (number % 10) * (number % 10);  // quadriert letzte Ziffer
                number /= 10;                                   //"schneidet" letzte Ziffer ab

            } while (number > 0);                               //bis alle Ziffern abgeschnitten sind   
            number = squaredDigit;                              //zurück in Nummer geschrieben, falls Abbruchbedingung noch nicht erfüllt ist 

        } while (number != 1 && number != 4);                   //Abbruch, falls 1 (glücklich) oder 4(Glied der ungl. Zahlenfolge) erkannt wird

        if (number == 1) std::cout << i << std::endl;           // Wenn Glücklich, dann wird untersuchte Zahl ausgegeben
    }

    return 0;
}