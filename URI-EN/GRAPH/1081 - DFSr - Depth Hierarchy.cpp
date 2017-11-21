// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: DFSr - Depth Hierarchy
// Level: 3
// Category: GRAPH
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1081

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;

void busca(int v, vector<int> grafo[], bool visitado[], int peso) {
	visitado[v] = true;
	
	for(int i=0; i<grafo[v].size(); i++) {
		if(visitado[grafo[v][i]]) {
			for(int j=0; j<peso; j++)
				printf(" ");
			printf("%d-%d\n", v, grafo[v][i]);
		} else {
			for(int j=0; j<peso; j++)
				printf(" ");
			printf("%d-%d pathR(G,%d)\n", v, grafo[v][i], grafo[v][i]);
			busca(grafo[v][i], grafo, visitado, peso+2);
		}
	}
	
}

int main() {
	int aux;
	int n, v, a;
	int x, y;
	
	cin >> n;
	aux = n;
	
	while(n--) {
		scanf("%d%d", &v, &a);
		
		vector<int> grafo[30];
		bool visitado[30] = {false};
		
		for(int i=0; i<a; i++) {
			scanf("%d%d", &x, &y);
			grafo[x].push_back(y);
		}
		
		for(int i=0; i<v; i++)
			sort(grafo[i].begin(), grafo[i].end());
		
		printf("Caso %d:\n", aux-n);
		
		for(int i=0; i<v; i++) {
			if(!visitado[i]) {
				busca(i, grafo, visitado, 2);	
				if(!grafo[i].empty())
					printf("\n");
			}
		}
	}
	

}
