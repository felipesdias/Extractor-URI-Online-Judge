// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Brick Game
// Level: 1
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1436

#include <stdio.h>
#include <algorithm>

int main () {
	int jogadores[20], i, m, n;
	
	scanf("%d", &n);
	
	for(int k = 1; k <= n; k++) {
		scanf("%d", &m);
		
		for(i = 0; i < m; i++)
			scanf("%d", &jogadores[i]);
			
		std::sort(jogadores, jogadores+m);
		
		printf("Case %d: %d\n", k, jogadores[m/2]);
	}
	
	return 0;
}
