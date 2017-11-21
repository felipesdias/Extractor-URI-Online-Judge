// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Colisão Galática
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1749

#include <bits/stdc++.h>

using namespace std;

struct Vertice {
	int x, y;
	vector<int> filhos;
};

Vertice grafo[60000];
bool visitado[60000];
int n;
map<pair<int, int> , int> mapa;
int cor1;
int cor2;

void menos(int v, bool tipo) {
	visitado[v] = true;

	if(tipo)
		cor1++;
	else
		cor2++;

	for(int i=0; i<grafo[v].filhos.size(); i++)
		if(!visitado[grafo[v].filhos[i]]) 
			menos(grafo[v].filhos[i], !tipo);
}

int main() {
	cin >> n;

	int x, y;
	for(int i=0; i<n; i++) {
		scanf("%d%d", &x, &y);
		mapa[make_pair(x, y)] = i;
		grafo[i].x = x;
		grafo[i].y = y;
	}

	vector<pair<int, int> > teste;

	for(int i=-5; i<=5; i++)
		for(int j=-5; j<=5; j++)
			if(i*i + j*j <= 25 && (i||j))
				teste.push_back(make_pair(i, j));
	int tam = teste.size();

	auto it = mapa.end();
	auto fim = mapa.end();
	for(int i=0; i<n; i++) {
		for(int j=0; j<tam; j++) {
			it = mapa.find(make_pair(grafo[i].x + teste[j].first, grafo[i].y + teste[j].second)); 
			if(it != fim) {
				grafo[i].filhos.push_back(it->second);
			}
		}
	}

	fill(visitado, visitado+n, false);
	int cont = 0;
	for(int i=0; i<n; i++) {
		if(!visitado[i]) {
			if(grafo[i].filhos.size() == 0)
				visitado[i] = true;
			else  {
				cor1 = 0;
				cor2 = 0;
				menos(i, false);
				cont += min(cor1, cor2);
			}
		}
	}

	cout << cont << endl;

	return 0;
}
