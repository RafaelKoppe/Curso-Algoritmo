#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, somaAcima;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int matriz[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    somaAcima = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i < j) {
                somaAcima = somaAcima + matriz[i][j];
            }
        }
    }

    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = "
         << somaAcima << endl;

    return 0;
}
