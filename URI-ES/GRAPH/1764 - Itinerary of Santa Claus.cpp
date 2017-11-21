// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Itinerary of Santa Claus
// Nível: %d
// Categoria: GRAPH
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1764

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
	int nCidades, a;
	int x, y, t;

	scanf("%d%d", &nCidades, &a);
	while(nCidades != 0 && a != 0) {
		vector<No> grafo[40001];
		bool visitado[40001] = {false};
		
		for(int i=0; i<a; i++) {
			scanf("%d%d%d", &x, &y, &t);
			aux.vert = y;
			aux.peso = t;
			
			grafo[x].push_back(aux);
			aux.vert = x;
			grafo[y].push_back(aux);
		}

		printf("%d\n", prim(grafo, visitado));
		
		scanf("%d%d", &nCidades, &a);
	}

}

