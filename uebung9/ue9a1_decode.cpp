#include <iostream>
#include <string>
#include <vector>

std::string decode_mail_adress (std::string mail)
{
    std::size_t pos;

    // @:
    pos = mail.find( "(at)" );
    
    while(pos != std::string::npos)
    {
        mail.replace( pos, 4, "@" );
        pos = mail.find( "(at)", pos );
    }

    // .:
    pos = mail.find( "(dot)" );
    
    while(pos != std::string::npos)
    {
        mail.replace( pos, 5, "." );
        pos = mail.find( "(dot)", pos );
    }

    // -:
    pos = mail.find( "(minus)" );
    
    while(pos != std::string::npos)
    {
        mail.replace( pos, 7, "-" );
        pos = mail.find( "(minus)", pos );
    }

    return mail;
}

int main()
{
    std::vector<std::string> output;

    std::string input;

    do
    {
        std::cout << "Bitte geben Sie eine der umzuwandelnden Mailadressen an (leere Eingabe beginnt die Ausgabe): " << std::endl;
        std::getline(std::cin, input);

        if (!input.empty()) output.push_back( decode_mail_adress(input) );

    } while (!input.empty());

    for (std::string str : output) std::cout << str << std::endl;

    return 0;
}