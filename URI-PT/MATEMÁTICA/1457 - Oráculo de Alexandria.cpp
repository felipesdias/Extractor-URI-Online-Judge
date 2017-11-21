// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Oráculo de Alexandria
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1457

#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, passo;
   long long resp;
   char entrada[10000];
   
   scanf("%*d");
   
   while(scanf(" %d", &n) > 0) {
       scanf(" %s", entrada);
       
       passo = strlen(entrada);
       
       for(resp = 1; n > 1; n -= passo)
           resp *= n;
           
       printf("%lld\n", resp);
   }

   return 0;
}
