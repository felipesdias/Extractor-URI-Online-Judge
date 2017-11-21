// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: A Maior e Menor Caixa
// Nível: 5
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1294

#include <cstdio>
#include <cmath>
#include <algorithm>

double raiz(double l, double c) {
    return (4*(l+c) - sqrt(16*(l+c)*(l+c) - 48*l*c))/24;
}

int main() {
    double lar, comp, x1, x2;

    while(scanf("%lf %lf", &lar, &comp)!=EOF) {
        x1 = raiz(lar, comp);

        x2 = std::min(lar, comp)/2.0;

        printf("%.3lf 0.000 %.3lf\n", x1, x2);
    }

    return 0;
}

