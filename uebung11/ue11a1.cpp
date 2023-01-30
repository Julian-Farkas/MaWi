#include <iostream>
#include <sstream>

std::string remove_hyphens (std::string str)
{
    std::string buffer = "";
    for (char c : str)
    {
        if (c != '-') buffer += c;
    }
    return buffer;
}

char calculate_checksum (std::string &isbn)
{
    //string zu int durch stream konvertieren:
    std::istringstream isstream( remove_hyphens(isbn) );

    int num = 0;
    isstream >> num;

    //Nichtziffernzeichen (noch) im Stream
    if (isstream.fail() || !isstream.eof())
    {
        isbn = "Uebergebene ISBN enthaelt nichtnumerische Zeichen!";
        return 0; //  char 'NUL'
    }

    //Prüfziffer berechnen:

    int sum = 0;

    for (int i = 2; i <= 10; ++i)
    {
        sum += i * (num % 10); //letzte Ziffer x_i mit i multiplizieren
        num /= 10;   // "benutzte" Ziffer entfernen
    }

    //Berechnung der Prüfziffer:
    sum = 11 - ( sum % 11 );

    //Fall, dass Prüfziffer 10 wäre:
    if (sum == 10) return 'X';

    return '0' + sum; //ostringstream wäre overkill
}

void add_checksum (std::string &isbn)
{
    
    char checksum = calculate_checksum(isbn);

    //Prüfziffer der ISBN anhängen:
    std::ostringstream osstream; 

    //isbn in ostream "packen"
    osstream << isbn;

    //wenn korrekte ISBN eingegeben wurde: 
    if (checksum != 0) osstream << '-' << checksum;

    //Inhalt des Streams in isbn speichern
    isbn = osstream.str();

    return;
}

bool check_checksum (std::string isbn)
{
    char reference = isbn[isbn.length() - 1]; //letzte Ziffer 0-9, X speichern
    isbn.pop_back(); //Prüfziffer entfernen

    char checksum = calculate_checksum(isbn);

    //falls ungleich ODER Nutzer als letztes Zeichen NULL als reference in Eingabe reingemogelt hat:
    if (checksum == 0 || checksum != reference) return 0;
    
    return true;
}

int main()
{

    // Zum Prüfen von 'X' ISBN: 3-442-46093  bzw.  3-442-46093-X

    std::cout << "Bitte geben Sie die unvollstaendige ISBN an:\t";
    std::cout.flush();
    
    std::string isbn = "";
    std::cin >> isbn;
    add_checksum(isbn);

    std::cout << "Bitte geben Sie die zu pruefende ISBN an:\t";
    std::cout.flush();

    std::string isbnCheck = "";
    std::cin >> isbnCheck;

    std::cout << "Die vollstaendige ISBN lautet " << isbn << std::endl;
    
    std::cout << "Die Pruefziffer der angegebene ISBN " << isbnCheck << " ist ";
    
    if ( !check_checksum(isbnCheck) ) std::cout << "nicht ";
    std::cout << "korrekt." << std::endl;

    return 0;
}