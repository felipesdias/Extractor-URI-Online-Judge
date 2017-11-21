// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Medians
// Level: 6
// Category: COMPUTATIONAL GEOMETRY
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1296

#include <cstdio>
#include <cmath>

int main() {
   double a, b, c, somaMed, rad;

   while(scanf("%lf %lf %lf", &a, &b, &c)!=EOF) {
       somaMed = (a+b+c)/2;
       rad = somaMed*(somaMed-a)*(somaMed-b)*(somaMed-c);

       if(rad <= 0)
           printf("-1.000\n");
       else
           printf("%.3lf\n", 4*sqrt(rad)/3.0);
   }

   return 0;
}
