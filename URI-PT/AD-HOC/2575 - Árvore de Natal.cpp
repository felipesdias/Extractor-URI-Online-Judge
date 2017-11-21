// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Árvore de Natal
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2575

#include <bits/stdc++.h>

using namespace std;

struct Aresta {
	int destino, dist, id;
};

struct Vertice {
	int beleza;
	vector<Aresta> filho;
};

Vertice grafo[2000000];
bool visitado[2000000];
priority_queue<int, vector<int>, greater<int> > removidos;

int deepSearch(int v, int beleza) {
	visitado[v] = true;
	for(int i=0; i<grafo[v].filho.size(); i++)
		if(! visitado[grafo[v].filho[i].destino])
			beleza += deepSearch(grafo[v].filho[i].destino, grafo[v].filho[i].dist);

	grafo[v].beleza = max(beleza, 0);
	return grafo[v].beleza;
}

void poda(int v, int id) {
	visitado[v] = true;
	
	if(grafo[v].beleza == 0 && v!=0) {
		removidos.push(id);
		return;
	}

	for(int i=0; i<grafo[v].filho.size(); i++)
		if(! visitado[grafo[v].filho[i].destino])
			poda(grafo[v].filho[i].destino, grafo[v].filho[i].id);
}

int main() {

	int n, d, a, b, w;

	cin >> n;

	Aresta aux;
	for(int i=0; i<n-1; i++) {
		scanf("%d%d%d%d", &d, &a, &b, &w);
		grafo[i].beleza = 0;

		aux.destino = b;
		aux.dist = w;
		aux.id = d;
		grafo[a].filho.push_back(aux);

		aux.destino = a;
		grafo[b].filho.push_back(aux);
	}

	fill(visitado, visitado+n, false);
	deepSearch(0, 0);
	fill(visitado, visitado+n, false);
	poda(0, 0);

	printf("%d %d\n", grafo[0].beleza, removidos.size());

	if(! removidos.empty()) {
		printf("%d", removidos.top());
		removidos.pop();

		while(!removidos.empty())
			printf(" %d", removidos.top()), removidos.pop();
		puts("");
	}

	return 0;
}
