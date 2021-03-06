// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Is This Integration?
// Level: 4
// Category: COMPUTATIONAL GEOMETRY
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1291

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

