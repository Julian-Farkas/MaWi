#include <iostream>
#include <vector>

//nimmt Zahl und fügt Ziffer für Ziffer die benötigten zeichen dem Vektor hinzu:
void number_to_display (unsigned int number, std::vector< std::vector<char> > &display)
{

}

void print_display (std::vector< std::vector<char> > &display)
{

}

int main()
{
    // 2-D-Vektor zum Anzeigen erstellen:
    std::vector< std::vector<char> > display;

    std::cout << "Zahl:\t";
    std::cout.flush();

    unsigned int number = 0;
    std::cin >> number;

    number_to_display(number, display);
    print_display(display);

    return 0;
}