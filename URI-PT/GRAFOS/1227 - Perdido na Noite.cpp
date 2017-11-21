// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Perdido na Noite
// Nível: 6
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1227

#include <bits/stdc++.h>

using namespace std;

#define ll long long

typedef vector<double> vl;
typedef vector<vl> vvl;
const int mod = 1000000;

// Retorna a matriz I_n
vvl matrixUnit(int n) {
    vvl res(n, vl(n));
    for (int i = 0; i < n; i++)
        res[i][i] = 1;
    return res;
}

vvl matrixMul(const vvl &a, const vvl &b) {
    int n = a.size();
    int m = a[0].size();
    int k = b[0].size();
    vvl res(n, vl(k));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < k; j++)
            for (int p = 0; p < m; p++)
               res[i][j] = (res[i][j] + ((a[i][p]) * (b[p][j])));
    return res;
}

// Retorna a matriz a^p
vvl matrixPow(const vvl &a, long long p) {
    if (p == 0)
        return matrixUnit(a.size());
    if (p & 1)
        return matrixMul(a, matrixPow(a, p - 1));
    return matrixPow(matrixMul(a, a), p / 2);
}

int main() {
	int n, a, b, c;
	int ini, fim;
	
	while(cin >> n >> a >> b >> c) {
		vvl grafo(n, vl(n, 0.0));
		vector<int> adj[110];
		
		for(int i=1; i<n; i++) {
			scanf("%d%d", &ini, &fim);
			adj[ini-1].push_back(fim-1);
			adj[fim-1].push_back(ini-1);
		}
		
		for(int i=0; i<n; i++) {
			if(i == c-1 || i == b-1)
				grafo[i][i] = 1.0;
			else
				for(size_t j=0; j<adj[i].size(); j++)
					grafo[i][adj[i][j]] = 1.0/adj[i].size();
		}
				vvl multiprica(1, vl(n));
		multiprica[0][a-1] = 1;
		auto mat = matrixMul(multiprica, matrixPow(grafo, 10000));
	
		
		printf("%.6lf\n", mat[0][b-1]);
	}
	
	
	return 0;
}

