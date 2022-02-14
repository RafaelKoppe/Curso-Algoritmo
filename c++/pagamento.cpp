#include <bits/stdc++.h>

using namespace std;

int main() {

    string nome;
    double valorHora, totalp;
    int hTrabalhadas;

    cout << "Nome: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> hTrabalhadas;

    totalp = valorHora * hTrabalhadas;
    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << totalp << endl;

    return 0;
}
