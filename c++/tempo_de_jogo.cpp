#include <bits/stdc++.h>

using namespace std;

int main() {

    int hinicial, hfinal, duracao;

    cout << "Hora inicial: ";
    cin >> hinicial;
    cout << "Hora final: ";
    cin >> hfinal;

    if (hinicial > hfinal || hinicial == hfinal) {
        duracao = 24 - hinicial + hfinal;
        cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    } else {
        duracao = hfinal - hinicial;
        cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    }

    return 0;
}
