// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Sucessor Par
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2679

#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    
    scanf("%d", &n);
    
    printf("%d\n", n & 1 ? n + 1 : n + 2);
 
    return 0;
}
