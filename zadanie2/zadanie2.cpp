#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Podaj liczbe" << endl;

    cin >> n;

    if (n % 2 == 0)
        cout << "liczba jest parzysta" << endl;
    else
        cout << "liczba jest nieparzysta" << endl;

    cout << endl;
}
