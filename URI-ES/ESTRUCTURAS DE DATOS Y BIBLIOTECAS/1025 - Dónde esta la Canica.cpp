// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Dónde esta la Canica?
// Nível: %d
// Categoria: ESTRUCTURAS DE DATOS Y BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1025

#include <stdio.h>

int main () {
	int n, t, val[10001], e, i, c = 1;
	
	while(scanf("%d %d", &n, &t) > 0 && n && t) {
		for(i = 1; i <= 10000; i++)
			val[i] = 0;
		
		for(i = 1; i <= n; i++) {
			scanf("%d", &e);
			
			val[e]++;
		}
		
		printf("CASE# %d:\n", c);
		
		while(t--) {
			scanf("%d", &e);
			
			if(val[e]) {
				n = 0;
				
				for(i = 0; i < e; i++)
					n += val[i];
				
				printf("%d found at %d\n", e, n+1);
			}
			else
				printf("%d not found\n", e);
		}
		
		c++;
	}

	return 0;
}
