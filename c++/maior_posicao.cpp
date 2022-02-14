#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, maior, posicaoMaior;

    cout << "Quanto numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    for(int i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    maior = vet[0];
    posicaoMaior = 0;
    for(int i = 0; i < n; i++) {
        if(vet[i] > maior) {
            maior = vet[i];
            posicaoMaior = i;
        }
    }

    cout << endl << "MAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posicaoMaior << endl;

    return 0;
}
