#include <iostream>

int main ()
{
    // 1.)
    int a = 5;
    int b = 2;
    double c = b;

    // 2.)

    std::cout << "Wert: " << (a * b - - - - - - 12.0f)
                    // 5 * 2 * (-1)**6 * 12.0 = 22.0 
    << "\t Typ: Float"
    << std::endl;

    // 3.)

    std::cout << "Wert: " << (a / b / c) 
                    // 5 / 2 / 2.0 = 2.0
    << "\t Typ: Double" 
    << std::endl;

    // 4.)

    std::cout << "Wert: " << (a / c / b)
                    // 5 / 2.0 / 2 = 1,25
    << "\t Typ: Double"
    << std::endl;

    // 5.)

    std::cout << "Wert: " << (-1.0f - a * 2E-1 + a / 2)
                    // -1,0 - 5 * 2*10**-1 + 2 = -1,0 - 1,0 + 2 = 0
    << "\t Typ: Double" // E-1 wird als Double behandelt
    << std::endl;

    // 6.)
    std::cout << "Wert: " << ( 1.0 + ( a *= ( 2 / - - ++b - ( c += .0e2 ) ) ) )
                    /* c = 2.0 + 0.0 * 10**2 = 2.0
                    ** a *= 2 / (b + 1) - 2.0 *= 0 - 2 *= -2 = -10
                    ** 1.0 + -10 = -9
                    */ 
    << "\t Typ: Double" // Da c mit .0e2 addiert wird, wird es als Double behandelt
    <<std::endl;

    return 0;
}