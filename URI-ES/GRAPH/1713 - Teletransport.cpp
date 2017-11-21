// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Teletransport
// Nível: %d
// Categoria: GRAPH
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1713

#include <bits/stdc++.h>  

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
const int mod = 10000;

vvi matrixUnit(int n) {
    vvi res(n, vi(n));
    for (int i = 0; i < n; i++)
        res[i][i] = 1;
    return res;
}

vvi matrixMul(const vvi &a, const vvi &b) {
    int n = a.size();
    int m = a[0].size();
    int k = b[0].size();
    vvi res(n, vi(k));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < k; j++)
            for (int p = 0; p < m; p++)
               res[i][j] = (res[i][j] + a[i][p] * b[p][j]) % mod;
    return res;
}

vvi matrixPow(const vvi &a, int p) {
    if (p == 0)
        return matrixUnit(a.size());
    if (p & 1)
        return matrixMul(a, matrixPow(a, p - 1));
    return matrixPow(matrixMul(a, a), p / 2);
}

int main() {
	int n, m, ini, fim, a;

	while(scanf("%d %d\n%d %d", &n, &m, &ini, &fim) != EOF) {
		vvi grafo(n+10, vi(n+10));

		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				grafo[i][j] = 0;


		for(int i=0; i<n; ++i)
			for(int j=0; j<4; ++j)
				scanf("%d", &a), grafo[i][a-1]++;

		auto result = matrixPow(grafo, m);

		cout << result[ini-1][fim-1] << endl;
	}

	return 0;
}
