#include <bits/stdc++.h>

using namespace std;

int main() {

    double c, f;
    char escala;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    if (escala == 'f') {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> f;
        c = (5 * ( f - 32)) / 9;
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Celsius: " << c << endl;
    } else {
        cout << "Digite a temperatura em Celsius: ";
        cin >> c;
        f = (c * 9 / 5) + 32;
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Fahrenheit: " << f << endl;
    }

    return 0;
}
