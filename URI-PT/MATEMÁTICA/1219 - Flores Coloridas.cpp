// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Flores Coloridas
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1219

#include <cstdio>
#include <cmath>

int main() {
    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c)!=EOF) {
        double semip, AT, rci, rcc, acc, aci;

        semip = (a+b+c)/2.0;
        AT = sqrt(semip*(semip-a)*(semip-b)*(semip-c));
        rci = 2*AT/(2*semip);
        rcc = (a*b*c)/(4*AT);
        aci = M_PI*rci*rci;
        acc = M_PI*rcc*rcc-AT;
        AT -= aci;

        printf("%.4lf %.4lf %.4lf\n", acc, AT, aci);

    }

    return 0;
}

