#include <iostream>
#include <cmath>

int main()
{

    /* x1 und x2 für
    ** ax² +bx + c
    ** berechnen mit
    ** // -p/2 +- sqrt( (p/2) + q)
    */

    double a = 1.0;
    double b = 1.0;
    double c = 1.0;

    double x1 = 1.0;
    double x2 = 1.0;

    std::cout << "Bitte geben a an:" << std::endl;
    std::cin >> a;

    std::cout << "Bitte geben b an:" << std::endl;
    std::cin >> b;

    std::cout << "Bitte geben c an:" << std::endl;
    std::cin >> c;

    b /= a;
    b /= 2; //benoetigen fuer pq-Formel nur b/2

    c /= a;

    if ((b * b) < c) 
    {
        std::cout << "Es existieren keine reellen Loesungen fuer Ihre Eingaben." << std::endl;
        return 0;
    }
    x1 = -b + sqrt( b * b - c);
    x2 = -b - sqrt( b * b - c);

    std::cout << "Die Loesungen lauten:\nx1 = " << x1 << " \nx2 = " << x2 << std::endl;

    return 0;
}