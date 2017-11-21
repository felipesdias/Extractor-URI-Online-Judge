// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Destruction Cannon
// Nível: %d
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1288

#include <cstdio>

struct Canhao {
    int poder, peso;
};

Canhao c[51];
int matriz[51][101];

int destroiCastelo(int i, int j) {
    if(matriz[i][j] >= 0)
        return matriz[i][j];

    if(c[i].peso > j)
        return destroiCastelo(i-1, j);

    int v1 = destroiCastelo(i-1, j), v2 = destroiCastelo(i-1, j-c[i].peso) + c[i].poder;

    if(v1 >= v2)
        matriz[i][j] = v1;
    else
        matriz[i][j] = v2;

    return matriz[i][j];
}

int preparaCanhao(int n, int m) {
    for(int i=0; i<=n; i++)
        matriz[i][0] = 0;

    for(int i=0; i<=m; i++)
        matriz[0][i] = 0;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            matriz[i][j] = -1;

    destroiCastelo(n, m);
}


int main() {
    int n_casos, n_projeteis, capacidade_carga, resistencia_total;

    scanf("%d", &n_casos);

    while(n_casos--) {
        scanf("%d", &n_projeteis);

        for(int i=0; i<n_projeteis; i++)
            scanf("%d %d", &c[i+1].poder, &c[i+1].peso);

        scanf("%d %d", &capacidade_carga, &resistencia_total);

        if(preparaCanhao(n_projeteis, capacidade_carga) >= resistencia_total)
            printf("Missao completada com sucesso\n");
        else
            printf("Falha na missao\n");
    }

    return 0;
}

