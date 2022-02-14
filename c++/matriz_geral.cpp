#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, linhaEscolhida, colunaEscolhida;
    double somaMatriz = 0;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    double matriz[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matriz[i][j] > 0) {
             somaMatriz = somaMatriz + matriz[i][j];
            }
        }
    }

    cout << fixed << setprecision(1);
    cout << endl << "SOMA DOS POSITIVOS: " << somaMatriz << endl;

    cout << endl << "Escolha uma linha: ";
    cin >> linhaEscolhida;
    cout << "LINHA ESCOLHIDA: ";
    for(int j = 0; j < n; j++) {
        cout << matriz[linhaEscolhida][j] << " ";
    }

    cout << endl << endl << "Escolha uma coluna: ";
    cin >> colunaEscolhida;
    cout << "COLUNA ESCOLHIDA: ";
    for(int i = 0; i < n; i++) {
        cout << matriz[i][colunaEscolhida] << " ";
    }
    cout << endl;

    cout << endl << "DIAGONAL PRINCIPAL: ";
    for(int i = 0; i < n; i++) {
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    cout << endl << "MATRIZ ALTERADA: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matriz[i][j] < 0) {
             matriz[i][j] = pow(matriz[i][j],2);
            }
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
