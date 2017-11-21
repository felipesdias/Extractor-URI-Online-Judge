// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: As Abas de Péricles
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2061

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    char acao[20];

    scanf("%d %d", &n, &m);
    getchar();

    for(int i=0; i<m; i++) {
        scanf("%s", acao);

        if(strcmp(acao, "fechou") == 0)
            n++;
        else
            n--;
    }

    printf("%d\n", n);

    return 0;
}

