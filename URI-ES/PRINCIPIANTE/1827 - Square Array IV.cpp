// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Square Array IV
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1827

#include <cstdio>

int main () {
	int n, i, j, v;

	while(scanf("%d", &n) > 0) {
		for(i = 0; i < n; i++) {
			for(j = 0; j < n; j++) {
				if(i == j && j == n/2)
					v = 4;
				else if(i >= n/3 && ((n%3 && i <= 2*n/3) || (!(n%3) && i < 2*n/3)) && j >= n/3 && ((n%3 && j <= 2*n/3) || (!(n%3) && j < 2*n/3)))
					v = 1;
				else if(i == j)
					v = 2;
				else if(i == n-j-1)
					v = 3;
				else
					v = 0;
				
				printf("%d", v);
			}
			
			printf("\n");
		}
		
		printf("\n");
	}
	
	return 0;
}
