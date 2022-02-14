#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cout << "Quantos valores vai ter cada vetor? ";
    cin >> n;

    int vetA[n];
    int vetB[n];
    int vetC[n];

    cout << "Digite os valores do vetor A:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> vetA[i];
    }

    cout << "Digite os valores do vetor B:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> vetB[i];
    }

    cout << "VETOR RESULTANTE:" << endl;
    for(int i = 0; i < n; i++) {
        vetC[i] = vetA[i] + vetB[i];
        cout << vetC[i] << endl;
    }

    return 0;
}
