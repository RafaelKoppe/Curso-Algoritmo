#include <bits/stdc++.h>

using namespace std;

int main() {

    int minutos;
    double valorPago;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    if (minutos > 100) {
        valorPago = ((minutos - 100) * 2) + 50.00;
        cout << fixed << setprecision(2);
        cout << "Valor a pagar: R$ " << valorPago << endl;
    } else {
        valorPago = 50.00;
        cout << fixed << setprecision(2);
        cout << "Valor a pagar: R$ " << valorPago << endl;
    }

    return 0;
}
