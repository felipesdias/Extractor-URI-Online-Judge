// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Ímpar, Par ou Roubo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2059

#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, j1, j2, r, a;

    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    if(r == 1 && a == 1)
        printf("Jogador 2 ganha!\n");
    else if(r == 1 && a == 0)
        printf("Jogador 1 ganha!\n");
    else if(r == 0 && a == 1)
        printf("Jogador 1 ganha!\n");
    else if(p == 1 && (j1+j2)%2 == 0)
        printf("Jogador 1 ganha!\n");
    else if(p == 1 && (j1+j2)%2 == 1)
        printf("Jogador 2 ganha!\n");
    else if(p == 0 && (j1+j2)%2 == 0)
        printf("Jogador 2 ganha!\n");
    else if(p == 0 && (j1+j2)%2 == 1)
        printf("Jogador 1 ganha!\n");

    return 0;
}

