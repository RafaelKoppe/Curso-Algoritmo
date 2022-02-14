#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {

    //declaracao de variavel
    double A, B, C, areaQ, areaT, areaTrap;

    //Entrada de dados na variaveis
    cout << "Digite a medida A: ";
    cin >> A;
    cout << "Digite a medida B: ";
    cin >> B;
    cout << "Digite a medida C: ";
    cin >> C;

    //Processamento de dados
    areaQ = A * A;
    areaT = (A * B) / 2.0;
    areaTrap = ((A + B) * C) / 2.0;

    //Saida de dados
    cout << fixed << setprecision(4);
    cout << "Area do quadrado = " << areaQ << endl;
    cout << "Area do triangulo = " << areaT << endl;
    cout << "Area do trapezio = " << areaTrap << endl;

    return 0;
}
