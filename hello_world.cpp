// benoetigte Biblietheken einbinden
#include <iostream>
#include <string>

int main()
{
    //String vordefinieren
    std::string name = "";

    std::cout << "Wie ist dein Name?" << std::endl;

    //Konsoleneingabe in "name" speichern (nur bis naechste Leerzeile!)
    std::cin >> name;

    std::cout << "Hallo " << name << std::endl;

    return 0;
}