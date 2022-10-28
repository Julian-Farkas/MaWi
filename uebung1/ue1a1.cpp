#include <iostream>
#include <limits>

int main()
{
    std::cout << "char:" << std::endl << "Speichergroesse (in Bits): " << sizeof(char) * 8 << std::endl

    //auf Intger casten, damit min und max als Zahl interpretiert wird und nicht als Buchstabe/ Steuerzeichen
    << "Minimum: " << int( std::numeric_limits<char>::min() ) << std::endl
    << "Maximum (signed): " << int( std::numeric_limits<char>::max() ) << std::endl
    << "Maximum (unsigned): " << int( std::numeric_limits<unsigned char>::max() ) << std::endl;

    std::cout << "short int:" << std::endl << "Speichergroesse (in Bits): " << sizeof(short int) * 8 << std::endl
    << "Minimum: " << std::numeric_limits<short int>::min() << std::endl
    << "Maximum (signed): " << std::numeric_limits<short int>::max() << std::endl
    << "Maximum (unsigned): " << std::numeric_limits<unsigned short int>::max() << std::endl;

    std::cout << "int:" << std::endl << "Speichergroesse (in Bits): " << sizeof(int) * 8 << std::endl
    << "Minimum: " << std::numeric_limits<int>::min() << std::endl
    << "Maximum (signed): " << std::numeric_limits<int>::max() << std::endl
    << "Maximum (unsigned): " << std::numeric_limits<unsigned int>::max() << std::endl;

    std::cout << "long int:" << std::endl << "Speichergroesse (in Bits): " << sizeof(long int) * 8 << std::endl
    << "Minimum: " << std::numeric_limits<long int>::min() << std::endl
    << "Maximum (unsigned): " << std::numeric_limits<long int>::max() << std::endl
    << "Maximum (unsigned): " << std::numeric_limits<unsigned long int>::max() << std::endl;

    return 0;
}
