// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Economia Brasileira
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1796

#include <cstdio>

int main() {
    int n, aux, sim = 0, nao = 0;

    scanf("%d", &n);

    while(n--) {
        scanf("%d", &aux);

        if(aux)
            nao++;
        else
            sim++;
    }

    if(sim>nao)
        printf("Y\n");
    else
        printf("N\n");

    return 0;
}

