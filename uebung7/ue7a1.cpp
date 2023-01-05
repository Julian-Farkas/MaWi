#include <iostream>

int prost_iterativ(int n)
{
    int toasts = 0;

    while (n > 1) //letzt Person kann nicht mit sich selbst anstoßen!
    {
        // wir nehmen eine Person raus, die mit allen Anderen anstößt und dann "geht": 
        --n;
        toasts += n;
    }

    return toasts;
}

int prost_rekursiv(int n)
{
    if (n == 1) return 0; // letzte Person kann nicht mit sich selbst anstoßen
    /* dasselbe wie bei iterativ,
    ** im rek. Aufruf nehmen wir eine Person weg und addieren auf den Rückgabewert alle Anstöße:
    */
    return prost_rekursiv( (n - 1) ) + (n - 1);
}

int prost_Endrekursiv(int n, int toasts)
{
    if (n == 1) return toasts;

    //Mischung aus iter. und rek.: Hilfsvariable toasts wird nun mitgegeben.
    n--;
    toasts += n;

    return prost_Endrekursiv(n, toasts);
}

int main() 
{
    int guests = 0;
    std::cout << "Bitte geben Sie die Anzahl der Partygaeste an: ";

    std::cin >> guests;

    std::cout << "Iterative Loesung: \t" << prost_iterativ(guests) << std::endl
              << "Rekursive Loesung: \t" << prost_rekursiv(guests) << std::endl
              << "Endrekursive Loesung: \t" << prost_Endrekursiv(guests, 0) << std::endl;

    return 0;
}