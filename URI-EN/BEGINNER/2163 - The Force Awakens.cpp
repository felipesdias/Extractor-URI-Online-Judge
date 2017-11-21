// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: The Force Awakens
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2163

#include <bits/stdc++.h>
using namespace std;

int grid[1002][1002];

int main() {
	int n, m;

	scanf("%d %d", &n, &m);

	for(int i = 0; i < n + 2; i++) {
		grid[i][0] = -1;
		grid[i][m + 1] = -1;
	}

	for(int i = 0; i < m + 2; i++) {
		grid[0][i] = -1;
		grid[m + 1][i] = -1;
	}

	for(int i = 1; i < n + 1; i++)
		for(int j = 1; j < m + 1; j++)
			scanf("%d", &grid[i][j]);

	for(int i = 1; i < n + 1; i++) {
		for(int j = 1; j < m + 1; j++) {
			if(grid[i][j] == 42 && grid[i + 1][j] == 7 &&
				grid[i - 1][j] == 7 && grid[i + 1][j - 1] == 7 &&
				grid[i][j - 1] == 7 && grid[i - 1][j - 1] == 7 &&
				grid[i + 1][j + 1] == 7 && grid[i][j + 1] == 7 &&
				grid[i - 1][j + 1] == 7) {
				printf("%d %d\n", i, j);
				goto fim;
			}
		}

		if(i == n)
			puts("0 0");
	}

	fim:;
}
