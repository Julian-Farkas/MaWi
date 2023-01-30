#include <iostream>
#include <vector>
#include <string>

//nimmt Ziffer und fügt die benötigten Zeichen dem Vektor hinzu:
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

    return;
}

//nimmt Nummer und wandelt sie mit Hilfsfunktion zu Zeichenfolge in 7-Segmentanzeige um:
void number_to_display (unsigned int number, std::vector< std::vector<std::string> > &display)
{
    //edge-case, wenn nur einstellig inkl "0" als Input:
    if (number < 10)
    {
        digit_to_display(number, display);
        return;
    }

    unsigned int reversed = 0; 

    while (number > 0)
    {
        reversed *= 10;
        reversed += number % 10;
        number /= 10;
    }

    for (/*reversed*/; reversed > 0; reversed /= 10)
    {
        digit_to_display(reversed % 10, display);
    }

    return;
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