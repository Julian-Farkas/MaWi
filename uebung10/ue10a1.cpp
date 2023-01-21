#include <iostream>
#include <vector>
#include <cstdlib>

void selectionSort (std::vector<double> &vec)
{
    double min = 1.0; //oder auch vec[n], verbessert Laufzeit, wenn var außerhalb von loop deklariert.
    int posMin = 0;   //Indexposition des gerade kleinsten Elementes

    // i ist in dieser Schleife die Position des aktuell kleinsten Elementes:
    for (int i = 0; i < vec.size(); ++i)
    {
        //setzen das Minimum und desses Position auf das 1. Elem., um Vergleichswert zu haben:
        min = vec[i];
        posMin = i;

        //schauen uns nun alle folgenden Einträge an:
        for (int j = (i + 1); j < vec.size(); ++j)
        {
            //wenn wir einen kleineren Eintrag als den zurzeit gespeicherten finden...
            if (vec[j] < min)
            {
                //...speichern wir diesen und dessen Position im Vektor als minimum
                min = vec[j];
                posMin = j;
            }
        }
        //wir vertauschen nun die zwei Einträge...
        vec[posMin] = vec[i];   //...indem wir den Eintrag an der Position des Min. mit dem der einzutragenden Position überschreiben...
        vec[i] = min;           //...und den Wert der einzutragenden Position mit dem des Minimums überschreiben...
                
    }

    return;
}

void randomVector (std::vector<double> &vec, int size)
{
    for ( ; size > 0; --size)
    {
        vec.push_back( drand48() );
    }

    return;
}

bool isSorted (std::vector<double> vec)
{
    for (int i = 1; i < vec.size(); ++i)
    {
        if ( vec[i - 1] > vec[i] ) return false;
    }
    return true;
}

void print (std::vector<double> vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        std::cout << i << ":\t" << vec[i] << std::endl;
    }

    return;
}

int main()
{
    int size = 0;
    std::vector<double> vec;

    std::cout << "Bitte geben Sie die Länge des Zufallsvectors an: ";
    std::cin >> size;

    randomVector(vec, size);
    selectionSort(vec);
    
    if ( isSorted(vec) )
    {
        print(vec);
    }
    else
    {
        std::cout << "Die Funktion \"selectionSort\" ist fehlgeschlagen!" << std::endl;
    }

    return 0;
}