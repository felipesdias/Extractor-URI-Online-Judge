// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Corrida
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2516

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
