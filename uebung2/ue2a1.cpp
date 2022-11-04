#include <iostream>

int main ()
{
    // 1.)
    int a = 5;
    int b = 2;
    int c = b;

    // 2.)

    std::cout << "Wert: " << (a * b - - - - - - 12.0f) 
    << "\t Typ: Float"
    << std::endl;

    // 3.)

    std::cout << "Wert: " << (a / b / c) 
    << "\t Typ: Integer" 
    << std::endl;

    // 4.)

    std::cout << "Wert: " << (a / c / b)
    << "\t Typ: Integer"
    << std::endl;

    // 5.)

    std::cout << "Wert: " << (-1.0f - a * 2E-1 + a / 2)
    << "\t Typ: Double" // anscheinend wird 2E-1 als Double behandelt
    << std::endl;

    // 6.)
    std::cout << "Wert: " << ( 1.0 + ( a *= ( 2 / - - ++b - ( c += .0e2 ) ) ) )
    << "\t Typ: Double" // Da c mit .0e2 addiert wird, wird es als Double behandelt
    <<std::endl;

    return 0;
}