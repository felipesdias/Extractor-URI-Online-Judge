// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Trouble with a Pentagon
// Level: 4
// Category: COMPUTATIONAL GEOMETRY
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1292

#include <bits/stdc++.h>

int main() {
   double lado, c, pi = 2 * acos(0.0);

   c = sin(108 * pi / 180) / sin(63 * pi / 180);

   while(scanf("%lf", &lado) > 0)
       printf("%.10lf\n", c * lado);
}
