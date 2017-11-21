// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Maester's Map
// Level: 2
// Category: GRAPH
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1855

#include <stdio.h>

int main() {
	int n, m, i, j, dir;
	char matriz[200][200];
	
	scanf("%d %d", &m, &n);
	
	for(i = 0; i <= n+1; i++)
		for(j = 0; j <= m+1; j++)
			matriz[i][j] = 0;
	
	for(i = 1; i <= n; i++)
		for(j = 1; j <= m; j++)
			scanf(" %c", &matriz[i][j]);
		
	i = 1;
	j = 1;
		
	while(matriz[i][j] != '*' && matriz[i][j] != 0) {		
		if(matriz[i][j] == '>')
			dir = 0;
		if(matriz[i][j] == 'v')
			dir = 1;
		if(matriz[i][j] == '<')
			dir = 2;
		if(matriz[i][j] == '^')
			dir = 3;
		
		matriz[i][j] = 0;
		
		if(dir == 0)
			j++;
		if(dir == 1)
			i++;
		if(dir == 2)
			j--;
		if(dir == 3)
			i--;
	}
	
	printf("%c\n", matriz[i][j] == '*' ? '*' : '!');
	
	return 0;
}
