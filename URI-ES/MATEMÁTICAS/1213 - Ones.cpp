// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Ones
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1213

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    long long int n, i, ones;

    while(cin >> n) {
        ones = 1; i = 1;
        while(ones%n) {
            ones%=n;
            ones = 10*ones+1;
            i++;
        }
        cout << i << endl;
    }

    return 0;
}

