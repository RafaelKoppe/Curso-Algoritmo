#include <bits/stdc++.h>

using namespace std;

int main() {

    double r, area;

    cout << "Digite o valor do raio do circulo: ";
    cin >> r;

    area = 3.14159 * pow(r, 2);
    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;

    return 0;
}
