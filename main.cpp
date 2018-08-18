#include <iostream>
#include <conio.h>

using namespace std;

int GetInputLimit();

int main(int argc, char const *argv[])
{
    unsigned int limit {0};
    cout << "Sommes des nombres divisible par 3 et 5" << endl;
    limit = GetInputLimit();

    //Calculation
    unsigned int total {0};
    for(unsigned int i=1; i<=limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            total += i;
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Sum of natural number divisible by either 3 or 5 : " << total << endl;

    cout << "Press any key to continue... " << endl;
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
