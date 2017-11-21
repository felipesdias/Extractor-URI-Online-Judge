// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Dudu Service Maker
// Level: 2
// Category: GRAPH
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1610

#include <cstdio>
#include <vector>
using namespace std;

bool bp(vector<int> *g, bool *visitado, bool *visitadoT, int v) {
    if(visitadoT[v])
        return true;

    if(!visitado[v]) {
        visitadoT[v] = true;

        for(int i=0; i<g[v].size(); i++)
            if(bp(g, visitado, visitadoT, g[v][i]))
                return true;

        visitado[v] = true;
        visitadoT[v] = false;
    }

    return false;
}

int main() {
    int nCases, n, m, aux, aux2;

    scanf("%d", &nCases);

    while(nCases--) {
        bool visitado[10001] = {false};
        bool visitadoT[10001] = {false};
        vector<int> grafo[10001];
        bool loop;

        scanf("%d %d", &n, &m);
        while(m--) {
            scanf("%d %d", &aux, &aux2);
            grafo[aux].push_back(aux2);
        }

		for(int i=1; i<n; i++) {
            if(!visitado[i]) {
                loop = bp(grafo, visitado, visitadoT, i);
                if(loop)
                    break;
            }
		}

        if(loop)
            printf("SIM\n");
        else
            printf("NAO\n");
    }

    return 0;
}

