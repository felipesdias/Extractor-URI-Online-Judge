// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Fast Fibonacci
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2164

#include <stdio.h>
#include <math.h>
 
int main() {
    int n;
    double f1, f2, sq = sqrt(5);
 
    scanf("%d", &n);
 
    f1 = (1 + sq) / 2;
    f2 = (1 - sq) / 2;
    
    printf("%.1lf\n", (pow(f1, n) - pow(f2, n)) / sq);
 
    return 0;
}
