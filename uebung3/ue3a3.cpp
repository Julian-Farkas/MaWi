#include <iostream>

int main()
{
    //Schleife für alle Zahlen von 1 bis 500:
    for (int i = 1; i <= 500; ++i)
    {
        int ones = i % 10;
        //"schneidet Hunderter- und Zehnerstellen mit % 10 = [0-9] ab"

        int tens = i / 10 % 100;
        //"schneidet Einerstellen mit (ganzzahlig) / 10 und Hunderterstellen mit % ab"

        int hundreds = i / 100;
        //"schneidet Einer- und Zehnerstellen mit / 100 (ganzzahlig) ab"
    }

    return 0;
}