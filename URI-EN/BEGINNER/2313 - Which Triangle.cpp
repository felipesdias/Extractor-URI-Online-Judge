// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Which Triangle
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2313

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a >= b + c || b >= a + c || c >= a + b) {
        cout << "Invalido" << endl;
        return 0;
    }
    else if (a == b && a == c)
        cout << "Valido-Equilatero" << endl;
    else if (a == b || a == c || b == c)
        cout << "Valido-Isoceles" << endl;
    else
        cout << "Valido-Escaleno" << endl;

    cout << "Retangulo: ";
    
    if (a * a + b * b == c * c)
        cout << "S" << endl;
    else if (a * a + c * c == b * b)
        cout << "S" << endl;
    else if (b * b + c * c == a * a)
        cout << "S" << endl;
    else
        cout << "N" << endl;
}
