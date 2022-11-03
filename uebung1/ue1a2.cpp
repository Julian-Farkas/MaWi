#include<iostream>
#include<string>

int main ()
{
    float answer1 = 0.0;
    std::cout << "Geben Sie Pi mit den ersten zwei Ziffern an:" << std::endl;
    std::cin >> answer1;

    short int answer2 = 0;
    std::cout << "Wie viele Bit hat der \"Char\"-Datentyp??" << std::endl;
    std::cin >> answer2;

    std::string answer3 = "";
    std::cout << "Wie heissen Sie?" << std::endl;
    std::cin >> answer3;

    char answer4 = 'a';
    std::cout << "Wie lautet der 3. Buchstabe des Alphabets?" << std::endl;
    std::cin >> answer4;

    std::string answer5 = "";
    std::cout << "Wie heißt das Betriebssysstem, was Sie gerade benutzen?" << std::endl;
    std::cin >> answer5;

    std::cout << answer5 << " " << answer4 << " " << answer3 << " " << answer2 << " " << answer1 << std::endl;
    return 0;
}