// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Zona Horaria
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2057

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if((a + b + c)%24 < 0)
        printf("%d\n", 24 + (a + b + c)%24);
    else
        printf("%d\n", (a + b + c)%24);

    return 0;
}

