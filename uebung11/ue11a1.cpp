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

void add_checksum (std::string &isbn)
{
    //string zu int durch stream konvertieren:
    std::istringstream isstream( remove_hyphens(isbn) );
    
    int num = 0;
    isstream >> num;

    if (isstream.fail())
    {
        isbn = "Uebergebene ISBN enthaelt nichtnumerische Zeichen!";
        return;
    }

    //Prüfziffer berechnen:

    int sum = 0;

    for (int i = 2; i <= 10; ++i)
    {
        sum += i * (num % 10); //letzte Ziffer x_i mit i multiplizieren
        num /= 10;   // "benutzte" Ziffer entfernen
    }

    sum = 11 - ( sum % 11 );

    //Prüfziffer der ISBN anhängen:
    std::ostringstream osstream; //isbn in ostream "packen"

    sum == 1 ? osstream << isbn << "-X" : osstream << isbn << '-' << sum;

    isbn = osstream.str();

    return;
}

bool check_checksum (const std::string& isbn)
{
        
}

int main()
{
    std::string str = "3-540-55943";
    add_checksum(str);
    bool check1 = check_checksum(str), check2 = check_checksum("3-540-55943-X");
    std::cout << str << check1 << check2 << std::endl;
    return 0;
}