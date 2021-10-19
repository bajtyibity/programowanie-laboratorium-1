#include <iostream>

using namespace std;

int main()
{

    cout << "program pobiera 4 liczby i wypisuje srednia arytmetyczna\n\n";

    double w,n[4];

    w = 0;

    for (int i = 0; i < 4; i++)
    {
        cout << "wprowadz liczbe zmieno przecinkowa nr "<<1<<" : ";
        cin >> n[i];
        cout << endl;
        w += n[i];
    }

    cout << "srednia arytmetyczna wynosi: " << w / 4 << endl;

}
