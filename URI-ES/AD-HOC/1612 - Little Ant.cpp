// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Little Ant
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1612

#include <cstdio>

int main() {
    int n, aux;

    scanf("%d", &n);

    while(n--) {
        scanf("%d", &aux);
        if(aux%2!=0)
            aux++;
        printf("%d\n", aux/2);
    }

    return 0;
}

