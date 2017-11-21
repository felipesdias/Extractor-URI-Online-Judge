// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Countries at War
// Level: 3
// Category: GRAPH
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1148

#include <cstdio>

#define MAX 100000

int floydWarshall(int g[501][501], int v) {
    for(int k=1; k<=v; k++)
        for(int i=1; i<=v; i++)
            if(k!=i)
                for(int j=1; j<=v; j++)
                    if(g[i][j] > g[i][k] + g[k][j])
                        g[i][j] = g[i][k] + g[k][j];
}

int main() {
    int v, a, aux, aux2, peso, n_consultas, origem, destino;

    scanf("%d %d", &v, &a);

    while(v || a) {
        int grafo[501][501];

        for(int i=1; i<=v; i++)
            for(int j=1; j<=v; j++) {
                if(i == j)
                    grafo[i][j] = 0;
                else
                    grafo[i][j] = MAX;
            }

        while(a--) {
            scanf("%d %d %d", &aux, &aux2, &peso);

            if(grafo[aux2][aux] == MAX)
                grafo[aux][aux2] = peso;
            else {
                grafo[aux][aux2] = 0;
                grafo[aux2][aux] = 0;
            }
        }

        floydWarshall(grafo, v);

        scanf("%d", &n_consultas);

        for(int it=0; it<n_consultas; it++) {
            scanf("%d %d", &origem, &destino);

            if(grafo[origem][destino] < MAX)
                printf("%d\n", grafo[origem][destino]);
            else
                printf("Nao e possivel entregar a carta\n");
        }

        if(n_consultas!=0)
            printf("\n");

        scanf("%d %d", &v, &a);
    }

    return 0;
}
