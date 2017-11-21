// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Christmas Decorations
// Level: 1
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1761

#include <cstdio>
#include <cmath>

#define PI 3.141592654

int main() {
    double a, b, c;

    while(scanf("%lf %lf %lf", &a, &b, &c)!=EOF)
        printf("%.2lf\n", 5*(b*tan(a*PI/180)+c));

    return 0;
}

