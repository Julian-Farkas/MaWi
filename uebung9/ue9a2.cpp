#include <iostream>
#include <string>

int score (std::string goals)
{
    int points = 0;
    int pos = 0;

    char seperator = ':';

    //"Regex":   {[0-9]:[0-9]{ },{ }}

    while (pos < goals.length())
    {
        //ignorieren Leerzeilen und überspringen diese Stellen
        if (goals[pos] == ' ')
        {
            ++pos;
            continue;
        }
        // wenn wir nach einem Ergebnis suchen, was mit EINER Zahl anfängt (laut Aufgabe) (seperator == ':'), rechnen wir es aus
        else if (goals[pos] >= '0' && goals[pos] <= '9' && goals[pos + 1] == seperator) // goals[pos+1] == ':'
        {
            int scoreHome = goals[pos] - '0';
            int scoreVisitor = goals[pos + 2] - '0';

            // wenn eine Leerzeile vor oder hinter dem ':' liegt, dan ist die Eingabe falsch
            if (scoreHome < 0 || scoreHome > 9 || scoreVisitor < 0 || scoreVisitor > 9) return -1;

            if (scoreHome == scoreVisitor)
            {
                ++points;
            }
            else if(scoreHome > scoreVisitor)
            {
                points += 3;
            }
    	    
            //nun suchen wir nach dem ',' , was die Spielergebnisse voneinander trennt:
            seperator = ',';
            pos += 3;
        }
        // wenn wir das ',' gefunden haben, suchen wir wieder nach dem ':':
        else if (goals[pos] == ',' && seperator == ',') 
        {
            seperator = ':';
            ++pos;
        }

        //war irgendein Zeichen falsch, war die gesammte Eingabe falsch:
        else return -1;
    }

    return points;
}

int main()
{
    std::cout << "Bitte geben Sie die Spielergebnisse ein: " << std::endl;

    std::string input = "";

    std::getline(std::cin, input);

    int points = score(input);

    if (points > -1)
    {
        std::cout << "Die Mannschaft hat " << points << " Punkt(e) erziehlt." << std::endl;
    }
    else
    {
        std::cout << "Ungueltige Eingabe!" << std::endl;;
    }

    return 0;
}