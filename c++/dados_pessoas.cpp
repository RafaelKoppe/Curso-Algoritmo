#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, nhomens;
    double menorAltura, maiorAltura, media, somaM, contM;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    double alturas[n];
    char genero[n];

    for(int i = 0; i < n; i++) {
        cout << "Altura da " << i + 1 << "a pessoa: ";
        cin >> alturas[i];
        cout << "Genero da " << i + 1 << "a pessoa: ";
        cin >> genero[i];
    }

    menorAltura = alturas[0];
    for(int i = 1; i < n; i++) {
        if(alturas[i] < menorAltura) {
            menorAltura = alturas[i];
        }
    }
    cout << "Menor altura = " << menorAltura << endl;

    maiorAltura = alturas[0];
    for(int i = 1; i < n; i++) {
        if(alturas[i] > maiorAltura) {
            maiorAltura = alturas[i];
        }
    }
    cout << "Maior altura = " << maiorAltura << endl;

    somaM = 0;
    contM = 0;
    for(int i = 0; i < n; i++) {
        if(genero[i] == 'F') {
            somaM = somaM + alturas[i];
            contM = contM + 1;
        }
    }
    media = somaM / contM;
    cout << fixed << setprecision(2);
    cout << "Media das alturas das mulheres = " << media << endl;

    nhomens = n - contM;
    cout << "Numero de homens = " << nhomens << endl;

    return 0;
}
