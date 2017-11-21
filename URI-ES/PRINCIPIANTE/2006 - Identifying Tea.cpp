// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Identifying Tea
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2006

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
