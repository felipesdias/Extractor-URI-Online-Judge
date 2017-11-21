// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Formiguinha
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1612

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

