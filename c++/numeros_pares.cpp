#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, cont = 0;

    cout << "Quanto numeros voce vai digitar? ";
    cin >> n;

    int vet[n];

    for(int i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl << "Numeros pares:" << endl;
    for(int i = 0; i < n; i++) {
        if(vet[i] % 2 == 0) {
            cout << vet[i] << " ";
            cont = cont + 1;
        }
    }

    cout << endl << "\nQUANTIDADE DE PARES = " << cont << endl;

    return 0;
}
