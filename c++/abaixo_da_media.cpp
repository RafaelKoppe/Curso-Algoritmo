#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    double vet[n], media, somaVet = 0;

    for(int i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    for(int i = 0; i < n; i++) {
        somaVet = somaVet + vet[i];
    }

    media = somaVet / n;
    cout << fixed << setprecision(3);
    cout << endl << "MEDIA DO VETOR = " << media << endl;

    cout << fixed << setprecision(1);
    cout << "ELEMENTOS ABAIXO DA MEDIA:" << endl;
    for(int i = 0; i < n; i++) {
        if(vet[i] < media) {
            cout << vet[i] << endl;
        }
    }

    return 0;
}
