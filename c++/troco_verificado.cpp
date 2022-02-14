#include <bits/stdc++.h>

using namespace std;

int main() {

    int qtd;
    double preco, dinheiro, troco, valorProduto;

    cout << "Preço unitário do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    valorProduto = preco * qtd;

    if (valorProduto > dinheiro) {
        troco = valorProduto - dinheiro;
        cout << fixed << setprecision(2);
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << troco << " REAIS" << endl;
    } else {
        troco = dinheiro - valorProduto;
        cout << fixed << setprecision(2);
        cout << "TROCO = " << troco << endl;
    }

    return 0;
}
