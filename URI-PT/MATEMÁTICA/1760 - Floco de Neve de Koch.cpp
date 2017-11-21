// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Floco de Neve de Koch
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1760

#include <cstdio>
#include <cmath>

int main() {
    double l;

    while(scanf("%lf", &l)!=EOF)
        printf("%.2lf\n", 4*l*l*sqrt(3)/10);

    return 0;
}

