// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Flores de Fuego
// Nível: %d
// Categoria: GEOMETRÍA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1039

#include <stdio.h>
#include <math.h>

int main() {
    int r1, x1, y1, r2, x2, y2;
    
    while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) > 0) {
        if(hypot(x1 - x2, y1 - y2) + r2 <= r1)
            puts("RICO");
        else
            puts("MORTO");
    }
 
    return 0;
}
