#include <iostream>
#include <conio.h>

using namespace std;

int GetInputLimit();

int main(int argc, char const *argv[])
{
    int limit {0};
    cout << "Sommes des nombres divisible par 3 et 5" << endl;
    limit = GetInputLimit();

    cout << "Appuyer sur une toucher pour terminer..." << endl;
    getch();
    return 0;
}

int GetInputLimit()
{
    int retVal {0};
    cout << "Veuillez inscrire la limite : ";
    
    while(!(cin >> retVal))
    {
        cin.clear();
        while (cin.get() != '\n') continue;
        cout << "Nombre invalide. Veuillez recommencer : ";
    }
    return retVal;
}
