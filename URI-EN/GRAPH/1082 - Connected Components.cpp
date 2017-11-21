// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Connected Components
// Level: 4
// Category: GRAPH
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1082

#include <cstdio>
#include <vector>
#include <algorithm>

void dfs(std::vector<int> *g, std::vector<int> &s, int n, bool *v) {
    s.push_back(n);
    v[n] = true;

    for(int i=0; i<g[n].size(); i++)
        if(!v[g[n][i]]) {
            dfs(g, s, g[n][i], v);
        }
}

int main() {
    int n_casos, vertices, arestas;
    char aux, aux2;

    scanf("%d", &n_casos);

    for(int z=1; z<=n_casos; z++) {
        bool visitado[26] = {false};
        std::vector<int> grafo[26];
        scanf("%d %d", &vertices, &arestas);
        getchar();

        while(arestas--) {
            scanf("%c %c", &aux, &aux2);
            getchar();
            grafo[aux-'a'].push_back(aux2-'a');
            grafo[aux2-'a'].push_back(aux-'a');
        }

        printf("Case #%d:\n", z);

        int conty = 0;
        for(int i=0; i<vertices; i++) {
            std::vector<int> solucao;
            if(!visitado[i]) {
                dfs(grafo, solucao, i, visitado);
                conty++;

                std::sort(solucao.begin(), solucao.end());
                for(int j=0; j<solucao.size(); j++)
                    printf("%c,", (char)(solucao[j]+'a'));

                printf("\n");
            }
        }

        printf("%d connected components\n\n", conty);
    }

    return 0;
}

