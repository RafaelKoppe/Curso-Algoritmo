#include <bits/stdc++.h>

using namespace std;

int main() {

    double primeiraNota, segundaNota, somaNotas;

    cout << "Digite a primeira nota: ";
    cin >> primeiraNota;
    cout << "Digite a segunda nota: ";
    cin >> segundaNota;

    somaNotas = primeiraNota + segundaNota;
    cout << "NOTA FINAL: " << somaNotas << endl;

    if (somaNotas < 60.0) {
        cout << "Reprovado";
    }

    return 0;
}
