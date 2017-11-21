// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Identificando o Chá
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2006

#include <iostream>
 
using namespace std;
 
int main() {
    int r, e, resp = 0;
    
    scanf("%d", &r);
    
    while(scanf("%d", &e) > 0)
        resp += e == r;
        
    printf("%d\n", resp);
 
    return 0;
}
