#include <iostream>

/*
** Vollkommene gerade Zahl: 2^(k-1) * ( 2^(k) - 1), mit k = Primzahl
*/

bool isPerfect(int n)
{ 
    //Hilfsvariable, um Teiler zu summieren:
    int sumOfDivider = 0; 

    //jede Zahl bis n/2, da n/2+1 kein Teiler mehr sein kann, wird untersucht:
    for(int i = 1; i <= (n/2); ++i)
    {
        //falls aktuelles i restlos teilt, ist i Teiler und wird aufsummiert:
        if (n % i == 0) sumOfDivider += i;
    }

    return (sumOfDivider == n);
    /* ist gleichbedeutend mit:

        if (sumOfDivider == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    */
}

int main()
{
    for (int i = 1; i <= 5000; ++i)
    {
        if ( isPerfect(i) /* == true */) std::cout << i << std::endl;
    }

    return 0;
}