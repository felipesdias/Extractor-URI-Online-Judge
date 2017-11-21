// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Running
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2516

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int s, va, vb;
    
    while(scanf("%d %d %d", &s, &va, &vb) > 0) {
        if(va - vb > 0) 
            printf("%.2lf\n", (s * 1.0) / (va-vb));
        else
            puts("impossivel");
    }
 
    return 0;
}
