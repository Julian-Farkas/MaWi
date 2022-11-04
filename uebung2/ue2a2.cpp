#include <iostream>

int main()
{
    int ifuenf = 5;
    int idrei = 3;
    double dvier = 4.0;

    std::cout << "ifuenf > idrei = " << (ifuenf > idrei) << std::endl;

    std::cout << "dvier < idrei " << (dvier < idrei) << std::endl;

    std::cout << "dvier > idrei && dvier > ifuenf " << (dvier > idrei && dvier > ifuenf) << std::endl;

    std::cout << "dvier > idrei || dvier > ifuenf " << (dvier > idrei || dvier > ifuenf) << std::endl;

    std::cout << "idrei / ifuenf " << (idrei / ifuenf) << std::endl;

    std::cout << "idrei / dvier " << (idrei / dvier) << std::endl;

    std::cout << "idrei - ifuenf " << (idrei - ifuenf) << std::endl;

    std::cout << "idrei = ifuenf " << (idrei = ifuenf) << std::endl;

    std::cout << "ifünf != 4 || dvier == 4 " << (ifünf != 4 || dvier == 4) << std::endl;

    std::cout << "5.0 <= dvier <= 6.0 " << (5.0 <= dvier <= 6.0) << std::endl;

    return 0;    
}