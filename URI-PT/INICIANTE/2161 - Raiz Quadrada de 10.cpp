// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Raiz Quadrada de 10
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2161

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double resp = 0.0;

    scanf("%d", &n);

    while(n--) {
        resp += 6.0;
        resp = 1.0 / resp;
    }

    resp += 3.0;

    printf("%.10lf\n", resp);
}
