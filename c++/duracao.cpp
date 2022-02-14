#include <bits/stdc++.h>

using namespace std;

int main() {

    int hora, horaResto, minutos, segundos, duracao;

    cout << "Digite a duracao em segundos: ";
    cin >> duracao;

    hora = duracao / 3600;
    horaResto = duracao % 3600;
    minutos = horaResto / 60;
    segundos = horaResto % 60;

    cout << hora << ":" << minutos << ":" << segundos << endl;

    return 0;
}
