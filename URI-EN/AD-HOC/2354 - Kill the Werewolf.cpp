// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Kill the Werewolf
// Level: 5
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2354

#include <bits/stdc++.h>

using namespace std;

struct tVertice {
	int id, pai;
	long long int dist;
	
	tVertice(int a, long long int b, int p = -1) {
		id = a;
		dist = b;
		pai = p;
	}
	
	bool operator<(tVertice a) const {
		return a.dist < dist;
	}
};

struct tGrafo {
	vector<tVertice> *Grafo;
	int n, *pais;
	
	tGrafo(int a) {
		Grafo = new vector<tVertice>[a];
		pais = new int[a];
		n = a;
	}
	
	~tGrafo() {
		limpa();
		delete [] pais;
		delete [] Grafo;
	}
	
	void operator=(tGrafo const &a) {
		limpa();
		
		for(int i = 0; i < n; i++)
			for(int j = 0; j < a.Grafo[i].size(); j++) 
				Grafo[i].push_back(a.Grafo[i][j]);
	}
	
	void limpa() {
		for(int i = 0; i < n; i++)
			Grafo[i].clear();
	}
	
	// Retorna a distância mínima entre os vertices fim e inicio
	long long int Dijkstra(int inicio, int fim) {
		priority_queue<tVertice> fila;
		bool visitados[n];
		int i;
		
		for(i = 0; i < n; i++)
			pais[i] = visitados[i] = 0;
		
		fila.push(tVertice(inicio, 0));
		
		while(fila.top().id != fim && !fila.empty()) {
			if(!visitados[fila.top().id]) {
				for(i = 0; i < Grafo[fila.top().id].size(); i++)
					if(!visitados[Grafo[fila.top().id][i].id])
						fila.push(tVertice(Grafo[fila.top().id][i].id, fila.top().dist + Grafo[fila.top().id][i].dist, fila.top().id));
						
				visitados[fila.top().id] = 1;
				pais[fila.top().id] = fila.top().pai;
			}
			
			fila.pop();
		}
		
		if(fila.empty())
			return -1;
		
		pais[fila.top().id] = fila.top().pai;
		
		return fila.top().dist;
	}
	
	// Retorna a arvore geradora mínima grafo, partindo de um vertice inicial
	tGrafo Prim(int inicio) {
		priority_queue<tVertice> fila;
		tGrafo G2(n);
		bool visitados[n];
		int i;
		
		fila.push(tVertice(inicio, 0));
		
		while(!fila.empty()) {
			if(!visitados[fila.top().id]) {
				for(i = 0; i < Grafo[fila.top().id].size(); i++)
					if(!visitados[Grafo[fila.top().id][i].id])
						fila.push(tVertice(Grafo[fila.top().id][i].id, Grafo[fila.top().id][i].dist, fila.top().id));
						
				visitados[fila.top().id] = 1;
				G2.addAresta(fila.top().pai, fila.top().id);
			}
			
			fila.pop();
		}
		
		return G2;
	}
	
	// Retorna a distancia (em largura) do vertice final até o vertice inicial
	long long int buscaLargura(int inicio, int fim) {
		queue<tVertice> fila;
		bool visitados[n];
		int i;
		
		for(i = 0; i < n; i++)
			visitados[i] = pais[i] = 0;
		
		fila.push(tVertice(inicio, 0));
		
		while(fila.front().id != fim && !fila.empty()) {
			if(!visitados[fila.front().id]) {
				for(i = 0; i < Grafo[fila.front().id].size(); i++)
					if(!visitados[Grafo[fila.front().id][i].id])
						fila.push(tVertice(Grafo[fila.front().id][i].id, fila.front().dist + 1, fila.front().id));
					
				visitados[fila.front().id] = 1;
				pais[fila.front().id] = fila.front().pai;
			}
			
			fila.pop();
		}
		
		if(fila.empty())
			return -1;
		
		pais[fila.front().id] = fila.front().pai;
		
		return fila.front().dist;
	}
	
	// Retorna o fluxo máximo do grafo entre os vértices s e t
	long long int edmondsKarp(int s, int t) {
		int u, v;
		long long int max_flow = 0;
		tGrafo G2(n);
		G2 = *this;
	 
		while (G2.buscaLargura(s, t) >= 0) {
			long long int path_flow = 10000000000;
			
			for (v = t; v != s; v = G2.pais[v]) {
				u = G2.pais[v];
				path_flow = min(path_flow, G2.valAresta(u, v));
			}
			
			for (v = t; v != s; v = G2.pais[v]) {
				u = G2.pais[v];
				G2.modificaAresta(u, v, -path_flow);
				G2.modificaAresta(v, u, path_flow);
			}
	 
			max_flow += path_flow;
		}
		
		
	 
		return max_flow;
	}

	void addAresta(int a, int b, long long int v = 0) {
		Grafo[a].push_back(tVertice(b, v));
	}
	
	void removeAresta(int a, int b) {
		for(int i = 0; i < Grafo[a].size(); i++)
			if(Grafo[a][i].id == b) {
				Grafo[a].erase(Grafo[a].begin() + i);
				return;
			}
	}
	
	long long int valAresta(int a, int b) {
		for(int i = 0; i < Grafo[a].size(); i++)
			if(Grafo[a][i].id == b)
				return Grafo[a][i].dist;
		return 0;
	}
	
	void modificaAresta(int a, int b, long long int v) {
		for(int i = 0; i < Grafo[a].size(); i++)
			if(Grafo[a][i].id == b) {
				Grafo[a][i].dist += v;
				
				if(Grafo[a][i].dist == 0)
					Grafo[a].erase(Grafo[a].begin() + i);
				
				return;
			}
		addAresta(a, b, v);
	}

	bool existeAresta(int a, int b) {
		for(int i = 0; i < Grafo[a].size(); i++)
			if(Grafo[a][i].id == b)
				return true;
		return false;
	}
};

int main() {
	tGrafo grafo(102);
	int n, i, v1, v2, lob, k, resp = 0;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
		scanf("%d %d", &v1, &v2);
		grafo.addAresta(i, v1 + 50, 1);
		grafo.addAresta(i, v2 + 50, 1);
		grafo.addAresta(0, i, 1);
		grafo.addAresta(i + 50, 101, 0);
	}
	
	for(lob = 1; lob <= n; lob++) {
		k = 0;
		
		grafo.modificaAresta(0, lob, 1);
		
		for(i = 1; i <= n; i++) {
			if(grafo.existeAresta(i, lob + 50))
				k++, grafo.modificaAresta(0, i, -1);
			// printf("%d -> %d : %d\n", 0, i, grafo.valAresta(0, i));
		}
		
		//printf("K: %d\n", k);
		
		for(i = 1; i <= n; i++)
			grafo.modificaAresta(i + 50, 101, k - 1); //, printf("%d -> %d : %d\n", i + 50, 101, grafo.valAresta(i + 50, 101));
		
		// printf("%d\n", grafo.edmondsKarp(0, 101));
		resp += grafo.edmondsKarp(0, 101) != n - k + 1;
		
		for(i = 1; i <= n; i++)
			if(grafo.existeAresta(i, lob + 50))
				grafo.modificaAresta(0, i, 1);
			
		for(i = 1; i <= n; i++)
			grafo.modificaAresta(i + 50, 101, - k + 1);
		
		grafo.modificaAresta(0, lob, -1);
	}
	
	printf("%d\n", resp);
}
