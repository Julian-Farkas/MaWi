#include "ue8a2.hpp"

int main()
{
    int vectorSize = 0;
    int vSizeInput = 0;
    double input = 0.0;

    std::cout << "Bitte geben Sie die Groesse des Vektors an: ";
    std::cin >> vSizeInput;

    std::vector<double> vec1;
    std::vector<double> vec2;

    for (int i = 0; i < vSizeInput; ++i)
    {
        std::cout << "Bitte geben Sie den " << (i + 1) << ". Eintrag des 1. Vektors an: ";
        std::cin >> input;

        vec1.push_back(input);
    }

    std::cout << "\nDas Maximum lautet: " << max(vec1) << std::endl;
    std::cout << "Das Minimum lautet: " << min(vec1) << "\n" << std::endl;
    
    for (int i = 0; i < vSizeInput; ++i)
    {
        std::cout << "Bitte geben Sie den " << (i + 1) << ". Eintrag des 2. Vektors an: ";
        std::cin >> input;

        vec2.push_back(input);
    }
    std::cout << "Das Skalarprodukt beider Vektoren lauten: " << scalarProdukt(vec1, vec2)  << std::endl;

    std::cout << "\nBitte geben Sie die mit dem Vektor zu multiplizierende Zahl an: ";
    std::cin >> input;

    std::cout << "Der multipizierte Vektor lautet: "; printVector(product(vec1, input)); std::cout << std::endl;

    return 0;
}
