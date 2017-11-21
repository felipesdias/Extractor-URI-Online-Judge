// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Street Deviation
// Nível: %d
// Categoria: GRAPH
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1442

#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;

using namespace std;

int n, m;

vector<int> grafo1[2000];
vector<int> grafo2[2000];
bool adj[1200][1200];

bool busca(vector<int> grafo[2000], int max) {
	bool visitado[2000];
		
	for(int i=1; i<=max; i++) {
		fill(visitado, visitado+n+10, false);
		
		queue<int> lista;
		visitado[i] = true;
		lista.push(i);
		int aux;
		
		while(!lista.empty()) {
			aux = lista.front();
			lista.pop();
			for(auto &i : grafo[aux]) {
				if(!visitado[i]) {
					visitado[i] = true;
					lista.push(i);
				}
			}
		}
		
		for(int i=1; i<=n; i++) {
			if(!visitado[i])
				return false;
		}
	}
	
	return true;
}

bool bridgeUtil(int u, bool visited[], int disc[], int low[], int parent[]) {
    static int time = 0;
 
    visited[u] = true;
 
    disc[u] = low[u] = ++time;
    
    for(auto &i : grafo2[u]) {
        if (!visited[i]) {
            parent[i] = u;
            if(!bridgeUtil(i, visited, disc, low, parent))
				return false;
 
            low[u]  = min(low[u], low[i]);
 
            if(low[i] > disc[u])
				if(adj[i][u] != adj[u][i]) 
					return false;
        }
        else if (i != parent[u])
            low[u] = min(low[u], disc[i]);
    }
    
    return true;
}

bool bridge() {
    bool visited[2000];
    int disc[2000];
    int low[2000];
    int parent[2000];
 
    for(int i=1; i<=n+10; i++) {
        parent[i] = -1;
        visited[i] = false;
    }
 
    for(int i=1; i<=n; i++)
        if(!visited[i])
            if(!bridgeUtil(i, visited, disc, low, parent))
				return false;
            
    return true;
}

int main() {
	int a, b, c;
	while(cin >> n >> m) {
		for(int i=0; i<n+10; i++) {
			fill(adj[i], adj[i]+n+10, false);
			grafo1[i].clear();
			grafo2[i].clear();
		}
		
		for(int i=0; i<m; i++) {
			scanf("%d%d%d", &a, &b, &c);
			
			if(i==0)
				continue;
				
			grafo1[a].push_back(b);
			adj[a][b] = true;
			
			if(c==2) {
				grafo1[b].push_back(a);
				adj[b][a] = true;
			}
				
			grafo2[a].push_back(b);
			grafo2[b].push_back(a);
		}
		
		if(busca(grafo1, n))
			puts("-");
		else if(!busca(grafo2, 1))
			puts("*");
		else if(bridge()) 
			puts("1");
		else
			puts("2");
	}
	
	

	return 0;
}

