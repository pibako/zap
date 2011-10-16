#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Podaj 3 liczby calkowite.\n";
    cin >> a;
    cin >> b;
    cin >> c;

    double result = (a + b + c)/3.;

    cout << "Wynik (a+b+c)/3 = " << result << endl;
    return 0;
}
