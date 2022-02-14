#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, x;

    cout << " Quantos numeros voce vai digitar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Digite um número: ";
        cin >> x;

        if (x == 0) {
            cout << "NULO" << endl;
        } else if (x > 0 && x % 2 == 0) {
            cout << "PAR POSITIVO" << endl;
        } else if (x < 0 && x % 2 == 0) {
            cout << "PAR NEGATIVO" << endl;
        } else if (x > 0 && x % 2 != 0) {
            cout << "IMPAR POSITIVO" << endl;
        } else if (x < 0 && x % 2 != 0) {
            cout << "IMPAR NEGATIVO" << endl;
        }
    }

    return 0;
}
