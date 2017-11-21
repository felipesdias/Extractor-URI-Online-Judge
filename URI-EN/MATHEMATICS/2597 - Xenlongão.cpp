// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Xenlongão
// Level: 3
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2597

#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, a;
   
   scanf("%d", &n);
   
   while(n--) {
       scanf("%d", &a);
       
       printf("%.0lf\n", a - floor(sqrt(a)));
   }

   return 0;
}
