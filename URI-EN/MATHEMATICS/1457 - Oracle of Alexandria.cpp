// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Oracle of Alexandria
// Level: 2
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1457

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
