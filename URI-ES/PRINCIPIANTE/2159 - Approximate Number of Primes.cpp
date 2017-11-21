// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Approximate Number of Primes
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2159

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    printf("%.1lf %.1lf\n", n*1.0/log(n), 1.25506*(n*1.0/log(n)));

    return 0;
}
