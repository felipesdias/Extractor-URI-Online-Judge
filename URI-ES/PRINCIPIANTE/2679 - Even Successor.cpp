// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Even Successor
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2679

#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    
    scanf("%d", &n);
    
    printf("%d\n", n & 1 ? n + 1 : n + 2);
 
    return 0;
}
