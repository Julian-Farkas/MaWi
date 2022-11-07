/*
** Dieselbe Loesung, nur, dass true oder false in die Konsole geschrieben wird
*/

#include <iostream>

// Funktionsueberladung, da input i int oder double sein kann:
std::string is_true(int i)
{
    return i == 0 ? " ist falsch." : " ist wahr.";
}

std::string is_true(double i)
{
    return i == 0 ? " ist falsch." : " ist wahr.";
}

int main()
{
    int ifuenf = 5;
    int idrei = 3;
    double dvier = 4.0;

    std::cout << "ifuenf > idrei = " << is_true(ifuenf > idrei) << dvier <<std::endl;
                //true

    std::cout << "dvier < idrei " << is_true(dvier < idrei) << std::endl;
                //false

    std::cout << "dvier > idrei && dvier > ifuenf " << is_true(dvier > idrei && dvier > ifuenf) << std::endl;
                //true         && false == false

    std::cout << "dvier > idrei || dvier > ifuenf " << is_true(dvier > idrei || dvier > ifuenf) << std::endl;
                //true          || false == true

    std::cout << "idrei / ifuenf " << is_true(idrei / ifuenf) << std::endl;
                // 3    / 5     = 0 == false

    std::cout << "idrei / dvier " << is_true(idrei / dvier) << std::endl;
                // 3    / 4.0   = 0.75 != 0 == true

    std::cout << "idrei - ifuenf " << is_true(idrei - ifuenf) << std::endl;
                //3     - 5     = -2 !=0 == true

    std::cout << "idrei = ifuenf " << is_true(idrei = ifuenf) << std::endl;
                //idrei = 5 : Zuweisung erfolgt : true

    //    std::cout << "ifünf != 4 || dvier == 4 " << is_true(ifünf != 4 || dvier == 4) << std::endl;
    //    Variable ifuenf ist falsch geschrieben : Compilerfehler
    
    std::cout << "5.0 <= dvier <= 6.0 " << is_true(5.0 <= dvier <= 6.0) << std::endl;
                // true, da Ausdruck as 5.0 <= dvier || dvier <= 6.0 interpretiert wird.

    return 0;    
}