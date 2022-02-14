#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, n;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> m;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> n;

    double mat[m][n], vetorGerado[m];

    for(int i = 0; i < m; i++) {
        cout << "Digite os elementos da " << i + 1 << "a. linha: " << endl;
            for(int j = 0; j < n; j++) {
                cin >> mat[i][j];
        }
    }

    cout << "VETOR GERADO:" << endl;
    for(int i = 0; i < m; i++) {
        vetorGerado[i] = 0;
            for(int j = 0; j < n; j++) {
                vetorGerado[i] = vetorGerado[i] + mat[i][j];
        }
        cout << fixed << setprecision(1);
        cout << vetorGerado[i] << endl;
    }

    return 0;
}
