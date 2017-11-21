// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: CheeseBreadSweeper
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2552

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, grid[102][102], resp[100][100];

	while(scanf("%d %d", &n, &m) > 0) {
		for(int i = 0; i < n + 2; i++) {
			grid[i][0] = 0;
			grid[i][m + 1] = 0;
		}

		for(int i = 0; i < m + 2; i++) {
			grid[0][i] = 0;
			grid[n + 1][i] = 0;
		}

		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++) {
				scanf("%d", &grid[i][j]);
				resp[i - 1][j - 1] = 0;
			}

		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
				if(grid[i][j] == 1)
					resp[i - 1][j - 1] = 9;
				else {
					resp[i - 1][j - 1] += grid[i + 1][j] == 1 ? 1 : 0;
					resp[i - 1][j - 1] += grid[i - 1][j] == 1 ? 1 : 0;
					resp[i - 1][j - 1] += grid[i][j + 1] == 1 ? 1 : 0;
					resp[i - 1][j - 1] += grid[i][j - 1] == 1 ? 1 : 0;
				}

		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++)
				printf("%d", resp[i][j]);
			puts("");
		}
	}
}
