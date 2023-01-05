#include <iostream>

void quer(int& summe, int& produkt) //summe und produkt wird als Referenzen mitgegeben, da 2 versch. Rückgaben erwartet werden
{
    //da + und * assoziativ, ist es egal, ob man vorne oder hinten anfängt

    int n = 0;
    //Summenberechnung:
    while(summe > 0)
    {
        n += summe % 10;
        summe /= 10;
    }
    
    summe = n;

    //Produktberechnung:
    n = 1;

    do
    {
        n *= produkt % 10;
        produkt /= 10;

    } while (produkt > 0 && n != 0); //falls 0 als Edukt auftaucht, kann man sich die anderen Ziffern sparen, da 0*x = 0
    
    produkt = n;

    return;
}

int main()
{
    int summe = 0;
    int produkt = 0;

    for (int i = 1; i <= 100; ++i)
    {
        summe = produkt = i;
        
        quer(summe, produkt);

        if( (summe + produkt) == i ) std::cout << summe << " + " << produkt << " = " << i << std::endl;
    }

    return 0;
}