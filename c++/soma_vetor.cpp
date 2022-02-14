#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, soma = 0, media;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    double vet[N];

    for(int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << fixed << setprecision(1);
    cout << endl << "Valores = ";
    for(int i = 0; i < N; i++) {
        cout << vet[i] << " ";
    }

    for(int i = 0; i < N; i++) {
        soma = soma + vet[i];
    }
    cout << fixed << setprecision(2);
    cout << endl << "SOMA = " << (double) soma << endl;

    media = soma / N;
    cout << fixed << setprecision(2);
    cout << "MEDIA = " << (double) media << endl;
    return 0;
}
