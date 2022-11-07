#include <iostream>

int main()
{
    int ifuenf = 5;
    int idrei = 3;
    double dvier = 4.0;

    std::cout << "ifuenf > idrei = " << bool(ifuenf > idrei) << dvier <<std::endl;
                //true

    std::cout << "dvier < idrei " << bool(dvier < idrei) << std::endl;
                //false

    std::cout << "dvier > idrei && dvier > ifuenf " << bool(dvier > idrei && dvier > ifuenf) << std::endl;
                //true         && false == false

    std::cout << "dvier > idrei || dvier > ifuenf " << bool(dvier > idrei || dvier > ifuenf) << std::endl;
                //true          || false == true

    std::cout << "idrei / ifuenf " << bool(idrei / ifuenf) << std::endl;
                // 3    / 5     = 0 == false

    std::cout << "idrei / dvier " << bool(idrei / dvier) << std::endl;
                // 3    / 4.0   = 0.75 != 0 == true

    std::cout << "idrei - ifuenf " << bool(idrei - ifuenf) << std::endl;
                //3     - 5     = -2 !=0 == true

    std::cout << "idrei = ifuenf " << bool(idrei = ifuenf) << std::endl;
                //idrei = 5 : Zuweisung erfolgt : true

    //    std::cout << "ifünf != 4 || dvier == 4 " << bool(ifünf != 4 || dvier == 4) << std::endl;
    //    Variable ifuenf ist falsch geschrieben : Compilerfehler
    
    std::cout << "5.0 <= dvier <= 6.0 " << bool(5.0 <= dvier <= 6.0) << std::endl;
                // true, da Ausdruck as 5.0 <= dvier || dvier <= 6.0 interpretiert wird.

    return 0;    
}