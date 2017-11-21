// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Christmas Trapeziums
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1765

#include <cstdio>

int main() {
    int n, t;
    double a, b;

    scanf("%d", &n);

    while(n) {
        for(int i=1; i<=n; i++) {
            scanf("%d%lf%lf", &t, &a, &b);
            printf("Size #%d:\nIce Cream Used: %.2lf cm2\n", i, t*2.5*(a+b));
        }
        printf("\n");
        scanf("%d", &n);
    }

    return 0;
}

