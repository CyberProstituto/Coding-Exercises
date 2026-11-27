#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    int contador = 1, maior = 1;

    cin >> s;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            contador++;
        }
        else {
            contador = 1;
        }

        if (contador > maior) {
            maior = contador;
        }
    }

    cout << maior << '\n';

    return 0;
}
