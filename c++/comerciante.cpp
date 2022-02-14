#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, baixo = 0, entre = 0, acima = 0;
    double lucro, lucroPorcentagem, totalCompra, totalVenda, lucroTotal;

    cout << "Serao digitados dados de quantos produtos? ";
    cin >> n;

    string nomes[n];
    double compra[n];
    double venda[n];

    for(int i = 0; i < n; i++) {
        cout << "Produto " << i + 1 << ":" << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        cout << "Preco de compra: ";
        cin >> compra[i];
        cout << "Preco de venda: ";
        cin >> venda[i];
    }

    for(int i = 0; i < n; i++) {
        lucro = venda[i] - compra[i];
        lucroPorcentagem = lucro * 100 / compra[i];
        if(lucroPorcentagem < 10) {
            baixo = baixo + 1;
        } else if(lucroPorcentagem <= 20) {
            entre = entre + 1;
        } else if(lucroPorcentagem > 20) {
            acima = acima + 1;
        }
    }

    for(int i = 0; i < n; i++) {
        totalCompra = totalCompra + compra[i];
        totalVenda = totalVenda + venda[i];
    }
    lucroTotal = totalVenda - totalCompra;

    cout << endl << "Relatorio:" << endl;
    cout << "Lucro abaixo de 10%: " << baixo << endl;
    cout << "Lucro entre 10% e 20%: " << entre << endl;
    cout << "Lucro acima de 20%: " << acima << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << totalCompra << endl;
    cout << "Valor total de venda: " << totalVenda << endl;
    cout << "Lucro Total: " << lucroTotal << endl;

    return 0;
}
