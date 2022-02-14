#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cout << "Deseja a tabuada para qual valor? ";
    cin >> n;

    for (int i = 0; i <= 10; i++) {
         cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
