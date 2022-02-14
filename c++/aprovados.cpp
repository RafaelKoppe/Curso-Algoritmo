#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    double media;

    cout << "Quantos alunos serao digitados? ";
    cin >> n;

    string nomes[n];
    double nota1[n];
    double nota2[n];

    for(int i = 0; i < n; i++) {
        cout << "Digite nome, primeira e segunda nota do " << i + 1
             << "o aluno: " << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cin >> nota1[i];
        cin >> nota2[i];
    }

    cout << "Alunos aprovados: " << endl;
    for(int i = 0; i < n; i++) {
        media = (nota1[i] + nota2[i]) / 2.0;
        if(media >= 6.0) {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
