#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> n;

    string nomes[n], maisVelha;
    int idades[n], comparaIdade;

    for(int i = 0; i < n; i++) {
        cout << "Dados da " << i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
    }

    comparaIdade = idades[0];
    for(int i = 1; i < n; i++) {
        if(idades[i] > comparaIdade) {
            comparaIdade = idades[i];
            maisVelha = nomes[i];
        }
    }

    cout << "PESSOA MAIS VELHA: " << maisVelha << endl;

    return 0;
}
