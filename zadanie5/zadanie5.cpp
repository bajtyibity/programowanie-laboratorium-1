#include <iostream>

using namespace std;

int main()
{
    char o;
    double a, b;
    cout << "Podaj pierwsza liczbe : ";
    cin >> a;
    cout << endl;

    cout << "Podaj druga liczbe : ";
    cin >> b;
    cout << endl;

    cout << "legenda\n";
    cout << "+ (dodawanie)  \n";
    cout << "- (idejmowanie)    \n";
    cout << "/ (dzielenie)     \n";
    cout << "* (mnozenie)     \n\n";
    cout << "podaj jaka operacja matematyczna ma byc wykonana na liczbach : \n";
    cin >> o;
    cout << endl;
    switch (o)
    {
        case '+':
           cout <<"wynik dodawania to "<<a+b<< endl;
        break;

        case '-':
            cout << "wynik odejmowania to " << a - b << endl;
        break;

        case '/':
            if (b!=0)
                cout << "wynik dzielenia to " << a / b << endl;

            else
                cout << "nie mozna dzielic przez zero"<< endl;

            cout << endl;
        break;

        case '*':
            cout << "wynik mnozenia to " << a * b << endl;
        break;

    default:
        cout << "nie prawidlowa operacja"<< endl;

        break;
    }



}
