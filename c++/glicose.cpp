#include <bits/stdc++.h>

using namespace std;

int main() {

    double glicose;

    cout << "Digite a medidade da glicose: ";
    cin >> glicose;

    if (glicose <= 100.0) {
        cout << "Classificação : normal" << endl;
    } else if (glicose <= 140.0) {
        cout << "Classificação : elevado" << endl;
    } else {
        cout << "Classificação : diabetes" << endl;
    }

    return 0;
}
