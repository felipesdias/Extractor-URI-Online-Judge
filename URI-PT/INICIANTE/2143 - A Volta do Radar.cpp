// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: A Volta do Radar
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2143

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;

    while(scanf("%d", &t), t) {
        while(t--) {
            scanf("%d", &n);
            
            if(n%2)
                printf("%d\n", 2*n-1);
            else
                printf("%d\n", 2*n-2);
        }
    }
}
