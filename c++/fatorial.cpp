#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, fat = 1;

    cout << "Digite o valor de N: ";
    cin >> N;

    for(int i = N; i > 0; i--) {
        fat = fat * i;
    }

    cout << "FATORIAL = " << fat << endl;

    return 0;
}
