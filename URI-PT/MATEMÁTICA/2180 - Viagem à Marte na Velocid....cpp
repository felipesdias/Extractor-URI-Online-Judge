// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Viagem à Marte na Velocid...
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2180

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int crivo[100000] = {0}, i, j, n;
    vector<int> primos;
    int soma = 0;
    
    for(i = 2; i < 100000; i++) 
        if(!crivo[i]) {
            primos.push_back(i);
            
            for(j = i + i; j < 100000; j += i)
                crivo[j] = 1;
        }
        
    scanf("%d", &n);
    
    auto inicio = lower_bound(primos.begin(), primos.end(), n);
    
    for(i = 0; i < 10; i++)
        soma += *inicio,
        ++inicio;
        
    printf("%d km/h\n", soma);
    printf("%d h / %d d\n", 60000000 / soma, 60000000 / (soma * 24));
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}
