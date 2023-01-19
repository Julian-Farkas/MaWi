#include <iostream>
#include <string>
#include <vector>

std::string encode_mail_adress (std::string mail)
{
    std::string encoded = "";

    for (size_t i = 0; i < mail.length(); ++i)
    {
        switch (mail[i])
        {
        case '@':
            encoded += "(at)";
            break;
        
        case '.':
            encoded += "(dot)";
            break;
        
        case '-':
            encoded += "(minus)";
            break;
        
        default:
            encoded +=  mail[i];
            break;
        }
    }

    return encoded;
}

int main()
{
    std::vector<std::string> output;

    std::string input;

    do
    {
        std::cout << "Bitte geben Sie eine der umzuwandelnden Mailadressen an (leere Eingabe startet die Ausgabe): " << std::endl;
        std::getline(std::cin, input);

        if (!input.empty()) output.push_back( encode_mail_adress(input) );

    } while (!input.empty());

    for (std::string str : output) std::cout << str << std::endl;

    return 0;
}