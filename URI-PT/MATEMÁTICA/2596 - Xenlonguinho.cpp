// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Xenlonguinho
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2596

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
