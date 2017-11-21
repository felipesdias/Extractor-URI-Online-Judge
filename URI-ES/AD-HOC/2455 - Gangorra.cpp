// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Gangorra
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2455

#include <stdio.h>
 
int main() {
    int a, b, c, d;
    
    while(scanf("%d %d %d %d", &a, &b, &c, &d) > 0) 
        if(a * b == c * d)
            puts("0");
        else
            printf("%d\n", a * b > c * d ? -1 : 1);
        
    return 0;
}
