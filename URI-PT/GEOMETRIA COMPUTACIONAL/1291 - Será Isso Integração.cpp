// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Será Isso Integração?
// Nível: 4
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1291

#include <cstdio>
#include <cmath>

int main() {
    double a;

    while(scanf("%lf", &a) != EOF) {
        double x, y, z;

        z = a*a*(1 - M_PI/6 - sqrt(3)/4);
        y = a*a - (M_PI*a*a)/4 - 2*z;
        x = a*a - 4*y - 4*z;

        printf("%.3lf %.3lf %.3lf\n", x, 4*y, 4*z);
    }

    return 0;
}

