// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Christmas Tree
// Nível: %d
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2026

#include <bits/stdc++.h>

using namespace std;

int pacotePeso[200];
int pacoteEnfeite[200];
int mochila[200][2000];

int n, nCaixas, pesoMaximo;

int resposta(int i, int j) {
    if(mochila[i][j] >= 0)
        return mochila[i][j];

    if(pacotePeso[i] > j)
        return resposta(i-1, j);

    int v1 = resposta(i-1, j), v2 = resposta(i-1, j-pacotePeso[i]) + pacoteEnfeite[i];

    if(v1 >= v2)
        mochila[i][j] = v1;
    else
        mochila[i][j] = v2;

    return mochila[i][j];
}

void zera() {
    for(int i=0; i<=nCaixas; i++)
        mochila[i][0] = 0;

    for(int i=0; i<=pesoMaximo; i++)
        mochila[0][i] = 0;

    for(int i=1; i<=nCaixas; i++)
        for(int j=1; j<=pesoMaximo; j++)
            mochila[i][j] = -1;
}

int main() {

    cin >> n;

    for(int i=1; i<=n; i++) {
        scanf("%d%d", &nCaixas, &pesoMaximo);

        for(int j=1; j<=nCaixas; j++)
            scanf("%d%d", &pacoteEnfeite[j], &pacotePeso[j]);

        zera();

        printf("Galho %d:\nNumero total de enfeites: %d\n\n", i, resposta(nCaixas, pesoMaximo));
    }

    return 0;
}

