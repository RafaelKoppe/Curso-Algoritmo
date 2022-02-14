#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, y, n;
    double divisao;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Entre com o numerador: ";
        cin >> x;
        cout << "Entre com o denominador: ";
        cin >> y;

        if (y == 0) {
            cout << "DIVISAO IMPOSSIVEL" << endl;
        } else {
            divisao = (double) x / y;
            cout << fixed << setprecision(2);
            cout << "DIVISAO = " << divisao << endl;
        }
    }

    return 0;
}
