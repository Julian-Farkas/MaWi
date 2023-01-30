#include <iostream>
#include <vector>
#include <string>

//nimmt Zahl und fügt Ziffer für Ziffer die benötigten zeichen dem Vektor hinzu:
void digit_to_display (unsigned int digit, std::vector< std::vector<std::string> > &display)
{
    switch (digit)
    {
    case 0:
        display[0].push_back(" __  ");
        display[1].push_back("|  | ");
        display[2].push_back("|  | ");
        display[3].push_back("|  | ");
        display[4].push_back("|__| ");
        break;
    
    case 1:
        display[0].push_back("  |  ");
        display[1].push_back("  |  ");
        display[2].push_back("  |  ");
        display[3].push_back("  |  ");
        display[4].push_back("  |  ");
        break;

    case 2:
        display[0].push_back(" __  ");
        display[1].push_back("   | ");
        display[2].push_back(" __| ");
        display[3].push_back("|    ");
        display[4].push_back("|__  ");
        break;

    case 3:
        display[0].push_back(" __  ");
        display[1].push_back("   | ");
        display[2].push_back(" __| ");
        display[3].push_back("   | ");
        display[4].push_back(" __| ");
        break;

    case 4:
        display[0].push_back("     ");
        display[1].push_back("|  | ");
        display[2].push_back("|__| ");
        display[3].push_back("   | ");
        display[4].push_back("   | ");
        break;

    case 5:
        display[0].push_back(" __  ");
        display[1].push_back("|    ");
        display[2].push_back("|__  ");
        display[3].push_back("   | ");
        display[4].push_back(" __| ");
        break;

    case 6:
        display[0].push_back(" __  ");
        display[1].push_back("|    ");
        display[2].push_back("|__  ");
        display[3].push_back("|  | ");
        display[4].push_back("|__| ");
        break;

    case 7:
        display[0].push_back(" __  ");
        display[1].push_back("   | ");
        display[2].push_back("   | ");
        display[3].push_back("   | ");
        display[4].push_back("   | ");
        break;

    case 8:
        display[0].push_back(" __  ");
        display[1].push_back("|  | ");
        display[2].push_back("|__| ");
        display[3].push_back("|  |");
        display[4].push_back("|__| ");
        break;

    case 9:
        display[0].push_back(" __  ");
        display[1].push_back("|  | ");
        display[2].push_back("|__| ");
        display[3].push_back("   | ");
        display[4].push_back(" __| ");
        break;
    }
}

void print_display (std::vector< std::vector<std::string> > &display)
{

}

int main()
{
    // Vektor zum Anzeigen erstellen:
    std::vector< std::vector<std::string> > display;

    std::cout << "Zahl:\t";
    std::cout.flush();

    unsigned int number = 0;
    std::cin >> number;

    //number_to_display(number, display);
    //print_display(display);

    return 0;
}