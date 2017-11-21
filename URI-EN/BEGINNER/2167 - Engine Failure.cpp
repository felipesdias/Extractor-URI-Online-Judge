// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Engine Failure
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2167

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, atual, antigo = -(1 << 29);
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> atual;
    
        if(atual < antigo) {
            printf("%d\n", i + 1);
            return 0;
        }
        
        antigo = atual;
    }
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    puts("0");
 
    return 0;
}
