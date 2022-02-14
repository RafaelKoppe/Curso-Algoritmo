#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, cont = 0, porcentagem;
    double media, somaAltura = 0;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string nome[N];
    int idade[N];
    double altura[N];

    for(int i = 0; i < N; i++) {
        cout << "Dados da " << i+1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
    }

    for(int i = 0; i < N; i++) {
        somaAltura = somaAltura + altura[i];
    }
    media = somaAltura / N;

    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << media << endl;

    for(int i = 0; i < N; i++) {
        if(idade[i] < 16) {
            cont = cont + 1;
        }
    }

    porcentagem = cont * 100.0 / N;

    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;

    for(int i = 0; i < N; i++) {
        if(idade[i] < 16) {
            cout << nome[i] << endl;
        }
    }

    return 0;
}
