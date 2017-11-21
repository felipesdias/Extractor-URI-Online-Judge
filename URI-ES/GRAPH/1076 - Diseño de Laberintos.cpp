// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Diseño de Laberintos
// Nível: %d
// Categoria: GRAPH
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1076

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int n, inicio, arestas, aux1, aux2, cont;
bool visitado[100];
vector<int> grafo[100];

void contaMovimentos(int num) {
    visitado[num] = true;
    for(int i=0; i<grafo[num].size(); i++) {
        if(!visitado[grafo[num][i]]) {
            cont += 2;
            contaMovimentos(grafo[num][i]);
        }
    }
}

int main() {
    scanf("%d", &n);

    while(n--) {
        cont = 0;

        for(int i=0; i<100; i++) {
            grafo[i].clear();
            visitado[i] = false;
        }

        scanf("%d", &inicio);
        scanf("%d%d", &arestas, &arestas);

        while(arestas--) {
            scanf("%d%d",&aux1, &aux2);
            grafo[aux1].push_back(aux2);
            grafo[aux2].push_back(aux1);
        }

        contaMovimentos(inicio);

        printf("%d\n", cont);

    }

    return 0;
}

