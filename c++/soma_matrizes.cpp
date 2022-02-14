#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, n;

    cout << "Quantas linhas vai ter cada matriz? ";
    cin >> m;
    cout << "Quantas colunas vai ter cada matriz? ";
    cin >> n;

    int matrizA[m][n];
    int matrizB[m][n];
    int matrizC[m][n];

    cout << "Digite os valores da matriz A: " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    cout << "Digite os valores da matriz B: " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matrizB[i][j];
        }
    }

    cout << "MATRIZ SOMA: " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
