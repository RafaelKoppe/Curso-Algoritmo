#include <bits/stdc++.h>

using namespace std;

int main() {

    int numero, contGasolina = 0, contAlcool = 0, contDiesel = 0;

    cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
    cin >> numero;

    while (numero != 4) {
        if (numero == 1) {
            contAlcool = contAlcool + 1;
        } else if (numero == 2) {
            contGasolina = contGasolina + 1;
        } else if (numero == 3){
            contDiesel = contDiesel + 1;
        }

        cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
        cin >> numero;
    }

    cout << "MUITO OBRIGADO!" << endl;
    cout << "Alcool: " << contAlcool << endl;
    cout << "Gasolina: " << contGasolina << endl;
    cout << "Diese: " << contDiesel << endl;
    return 0;
}
