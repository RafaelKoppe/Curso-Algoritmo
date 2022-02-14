#include <bits/stdc++.h>

using namespace std;

int main() {

    int idade, cont = 0, somaIdades = 0;
    double media;

    cout << "Digite as idades:" << endl;
    cin >> idade;

    if (idade < 0 ) {
        cout << "IMPOSSIVEL CALCULAR" << endl;
    } else {
        while (idade > 0) {
                somaIdades = somaIdades + idade;
                cont = cont + 1;
                cin >> idade;
    }

        media = (double) somaIdades / cont;

        cout << fixed << setprecision(2);
        cout << "MEDIA = " << media << endl;
    }

    return 0;
}
