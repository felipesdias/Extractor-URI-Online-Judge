// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Estradas Escuras
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1152

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;

struct No {
    int vert, peso;

    bool operator < (No a) const {
        return peso >= a.peso;
    }
/*
    bool operator > (No a) const {
        return !(*this < a);
    }
*/
};

vector<No> grafo[200001];
bool visitado[200001];

int prim(vector<No> g[], bool visitado[]) {
    int cont = 0;
    No aux;
    priority_queue<No> pq;
    visitado[0] = true;

    for(int i=0; i<g[0].size(); i++)
        pq.push(g[0][i]);

    while(!pq.empty()) {
        aux = pq.top();
        pq.pop();

        if(!visitado[aux.vert]) {
            visitado[aux.vert] = true;
            cont += aux.peso;

            for(int i=0; i<g[aux.vert].size(); i++)
                if(!visitado[g[aux.vert][i].vert])
                    pq.push(g[aux.vert][i]);
        }
    }

    return cont;
}

int main() {
	No aux;
	int cont;
	int nCidades, a;
	int x, y, t;

	scanf("%d%d", &nCidades, &a);
	while(nCidades != 0 && a != 0) {
		cont = 0;
		for(int i=0; i<=a; i++) {
			grafo[i].clear();
			visitado[i] = false;
		}
		
		for(int i=0; i<a; i++) {
			scanf("%d%d%d", &x, &y, &t);
			aux.vert = y;
			aux.peso = t;
			cont += t;
			grafo[x].push_back(aux);
			aux.vert = x;
			grafo[y].push_back(aux);
		}

		printf("%d\n", cont-prim(grafo, visitado));
		
		scanf("%d%d", &nCidades, &a);
	}

}

