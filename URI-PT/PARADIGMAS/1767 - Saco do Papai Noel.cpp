// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Saco do Papai Noel
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1767

#include <cstdio>

int matriz[101][51], qt[101], peso[101];

int tabela(int i, int j) {
    if(matriz[i][j]>=0)
        return matriz[i][j];

    if(j < peso[i])
        return tabela(i-1, j);

    int v1 = tabela(i-1, j);
    int v2 = tabela(i-1, j-peso[i]) + qt[i];

    if(v1 >= v2)
        matriz[i][j] = v1;
    else
        matriz[i][j] = v2;

    return matriz[i][j];
}

int preparaTabela(int n, int t) {
    for(int i=0; i<=n; i++)
        matriz[i][0] = 0;

    for(int i=0; i<=t; i++)
        matriz[0][i] = 0;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=t; j++)
            matriz[i][j] = -1;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=t; j++)
            matriz[i][j] = tabela(i, j);

    return tabela(n, t);
}

int main() {
    int n, pac, caso = 1;

    scanf("%d", &n);

    while(n--) {
        int pesoTot = 0, qtPac = 0;

        scanf("%d", &pac);

        for(int i=0; i<pac; i++)
            scanf("%d %d", &qt[i+1], &peso[i+1]);

        preparaTabela(pac, 50);

        int j = pac, k = 50;
        while(j>0 && k>=0) {
            if(matriz[j-1][k]!=matriz[j][k] && matriz[j-1][k]>=0) {
                pesoTot += peso[j];
                k -= peso[j];
            }
            else
                qtPac++;
            j--;
        }
/*
for(int i=0; i<pac; i++) {
    for(j=0; j<51; j++)
        printf("%d ", matriz[i][j]);
    printf("\n");
}
printf("\n");
*/
        printf("%d brinquedos\n", matriz[pac][50]);
        printf("Peso: %d kg\n", pesoTot);
        printf("sobra(m) %d pacote(s)\n\n", qtPac);
    }

    return 0;
}

