#include <iostream>

using namespace std;

int main()
{
    double x, y;

    cout << "Podaj pierwsza liczbe: ";
    cin >> x;

    cout << "Podaj druga liczbe: ";
    cin >> y;

    if(x>y)
        cout << "pierwsza liczba jest wieksza";
    else if (y > x)
        cout << "druga liczba jest wieksza";
    else
        cout << "liczby sa rowne";

    cout << endl;
}

