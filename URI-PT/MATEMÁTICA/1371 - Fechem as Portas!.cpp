// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Fechem as Portas!
// Nível: 6
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1371

#include <cstdio>
#include <cmath>

int main() {
    int n, raiz;

    scanf("%d", &n);

    while(n) {
        printf("1");

        raiz = sqrt(n);

        for(int i=2; i<raiz+1; i++)
            printf(" %d", i*i);

        printf("\n");

        scanf("%d", &n);
    }

    return 0;
}

