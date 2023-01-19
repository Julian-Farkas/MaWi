#include <iostream>
#include <string>

std::string cut_escape_secquence (std::string str)
{
    std::string result = "";

    for (size_t i = 0; i < str.length(); ++i)
    {
        //falls wir eine Leerzeile, newline oder tab finden...
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') 
        {
            //...fügen wir dem output dafür eine Leerzeile hinzu...
            result += ' ';

            //... und schauen, ob dahinter noch mehr ist, falls ja...
            while (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n')
            {
                //... dann springen wir einfach weiter und ...(siehe oben)
                ++i;
            }
        }
        else
        {   // ... und falls wir keinen der drei finden, fügen wir das dem output hinzu
            result += str[i];
        }
    }

    return result;
}

int main()
{
    std::string input = "";

    std::cout << "Bitte geben Sie den umzuwandelnden String an: " << std::endl;

    std::getline(std::cin, input);

    std::string formatted = cut_escape_secquence(input);

    std::cout << "Ihr eingegebener String \n\"" << input << "\"\nlautet gekuerzt nun \n\"" << formatted << "\"" << std::endl;

    return 0;
}