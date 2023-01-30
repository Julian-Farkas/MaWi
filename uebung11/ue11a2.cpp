#include <iostream>
#include <limits>
#include <vector>
#include <cmath>

//alternativ für floor()
unsigned int round_down (unsigned int num)
{
    if (num % 2 == 1)
    {
        return num -1;
    }
    else
    {
        return num;
    }
}

int main ()
{
    unsigned int left = 0, right = 0, result = 0; //linke und rechte Seite der Bauernmultiplikation

    std::vector<unsigned int> additionRight; //zum Speichern des Initial und der verdoppelten Werte

    std::cout << "Bitte  geben Sie die zwei zu multiplizerenden Zahlen (durch Leerzeile oder Tabulator getrennt) ein:" <<std::endl;
    //Eingabe der Werte
    std::cin >> left >> right;
    
    //falls schon left == 1:
    additionRight.push_back(right);
    std::cout << "\n" << left << "\tx\t" << right << std::endl;

    while (left > 1)
    {
        left = round_down(left) / 2;
        //left = floor(left / 2);
        //left >>= 1;    //Bitshift nach rechts, äquivalent zu oben

        right *= 2;
        //right <<= 1; //Bitshift nach links, äquivalent zu oben

        //rechte Seite in Vektor übertragen und Zwischenrechnungszeile ausgeben:
        additionRight.push_back(right);
        std::cout << left << "\t \t" << right << std::endl;
    }

    for (unsigned int i : additionRight) result += i;

    result -= additionRight[1]; //erste Multiplikation wird ignoriert, nicht in for-Schleife als continue, da hier nur 1 Operation

    std::cout << "--------------------\n=\t\t" << result << std::endl;

    return 0 ;
}