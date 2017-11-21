// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Square Root of 2
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2166

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double resp = 0.0;

    scanf("%d", &n);

    while(n--) {
        resp += 2.0;
        resp = 1.0 / resp;
    }

    resp += 1.0;

    printf("%.10lf\n", resp);
}
