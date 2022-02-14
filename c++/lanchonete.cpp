#include <bits/stdc++.h>

using namespace std;

int main() {

    int codproduto, qtd;
    double valor;

    cout << "Codigo do produto comprado: ";
    cin >> codproduto;
    cout << "Quantidade comprada: ";
    cin >> qtd;

    if (codproduto == 1) {
        valor = 5.00 * qtd;
    } else if (codproduto == 2) {
        valor = 3.50 * qtd;
    } else if (codproduto == 3) {
        valor = 4.80 * qtd;
    } else if (codproduto == 4) {
        valor = 8.90 * qtd;
    } else if (codproduto == 5) {
        valor = 7.32 * qtd;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valor << endl;

    return 0;
}
