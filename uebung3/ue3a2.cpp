#include<iostream>
#include<cstdlib>   //zum Benutzen von rand()

int main()
{
    int maxRange = 0;

    std::cout << "Bitte geben Sie den maimalen Zahlenbereich an, in dem Sie raten möchten:\nVon 0 bis: "; // bad practice ohne \n?
    std::cin >> maxRange;

    //srand() gibt Seed für rand(), der Seed für srand(unsigned int) selbst ist time(0), also die aktuelle Uhrzeit
    srand(time(0));

    int randomNumber = rand() % (maxRange + 1);

    int guess = 0;
    int guessCount = 0;

    do
    {
        std::cout << "Wie lautet die gesuchte Zahl?" << std::endl;
        std::cin >> guess;

        if (guess > randomNumber)
        {
            std::cout << "Die gesuchte Zahl ist kleiner." << std::endl;
        }
        else if (guess < randomNumber)
        {
            std::cout << "Die gesuchte Zahl ist groeser." << std::endl;
        }

        //inkrementiere Zähler bei jeden Schleifendurchlauf bzw. jedem Versuch
        ++guessCount;
        
    } while (guess != randomNumber);

    std::cout << "Korrekt! Sie haben " << guessCount << " Versuche gebraucht." << std::endl;

    return 0;
}