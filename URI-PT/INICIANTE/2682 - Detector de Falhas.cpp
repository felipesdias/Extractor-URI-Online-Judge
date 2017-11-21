// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Detector de Falhas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2682

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long ultimo = 0, atual;
    
    while(scanf("%lld", &atual) > 0) {
        if(atual < ultimo) {
            printf("%lld\n", ultimo + 1);
            
            return 0;
        }
        
        swap(ultimo, atual);
    }

    printf("%lld\n", ultimo + 1);
    
    return 0;
}
