#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, qtd, somaRatos = 0, somaSapos = 0, somaCoelhos = 0, total;
    double porcentagemR, porcentagemS, porcentagemC;
    char tipo;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Quantidade de cobaias: ";
        cin >> qtd;
        cout << "Tipo de cobaia: ";
        cin >> tipo;

        if(tipo == 'r') {
            somaRatos = somaRatos + qtd;
        } else if(tipo == 'c') {
            somaCoelhos = somaCoelhos + qtd;
        } else if(tipo == 's') {
            somaSapos = somaSapos + qtd;
        }
    }

    total = somaCoelhos + somaRatos + somaSapos;
    porcentagemC = (double) somaCoelhos / total * 100;
    porcentagemR = (double) somaRatos / total * 100;
    porcentagemS = (double) somaSapos / total * 100;

    cout << "\n";
    cout << "RELATORIO FINAL:" << endl;
    cout << "TOTAL: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << somaCoelhos << endl;
    cout << "Total de ratos: " << somaRatos<< endl;
    cout << "Total de sapos: " << somaSapos << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << porcentagemC << endl;
    cout << "Percentual de ratos: " << porcentagemR << endl;
    cout << "Percentual de sapos: " << porcentagemS << endl;
    return 0;
}
