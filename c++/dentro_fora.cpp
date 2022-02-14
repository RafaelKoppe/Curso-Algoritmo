#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, x, contd = 0, contf = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> x;

        if(x >= 10 && x <= 20) {
            contd = contd + 1;
        } else {
            contf = contf + 1;
        }
    }

    cout << contd << " DENTRO" << endl;
    cout << contf << " FORA" <<endl;
    return 0;
}
