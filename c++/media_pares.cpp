#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    double media;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    int vet[n], soma = 0, contpares = 0;

    for(int i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];

        if(vet[i] % 2 == 0) {
            soma = soma + vet[i];
            contpares = contpares + 1;
        }
    }

    if(contpares == 0) {
        cout << "NENHUM NUMERO PAR" << endl;
    } else {
        cout << fixed << setprecision(1);
        media = (double) soma / contpares;
        cout << "MEDIA DOS PARES = " << media << endl;
    }

    return 0;
}
