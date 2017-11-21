// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Problema com um Pentágono
// Nível: 4
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1292

#include <bits/stdc++.h>

int main() {
   double lado, c, pi = 2 * acos(0.0);

   c = sin(108 * pi / 180) / sin(63 * pi / 180);

   while(scanf("%lf", &lado) > 0)
       printf("%.10lf\n", c * lado);
}
