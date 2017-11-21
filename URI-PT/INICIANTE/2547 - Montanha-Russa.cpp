// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Montanha-Russa
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2547

#include <iostream>
 
using namespace std;
 
int main() {
    int n, min, max, e, resp;
    
    while(cin >> n >> min >> max) {
        resp = 0;
        
        while(n--)
            cin >> e, resp += e >= min && e <= max;
            
        printf("%d\n", resp);
    }
    return 0;
}
