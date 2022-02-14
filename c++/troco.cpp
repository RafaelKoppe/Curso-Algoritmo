#include <bits/stdc++.h>

using namespace std;

int main() {

    double valor, dinheiro, troco;
    int qtd;

    cout << "Preço unitário do produto: ";
    cin >> valor;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    troco = dinheiro - (valor * qtd);

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

    return 0;
}
