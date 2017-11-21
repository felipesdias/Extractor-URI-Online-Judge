// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Sequía
// Nível: %d
// Categoria: ESTRUCTURAS DE DATOS Y BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1023

#include <stdio.h>
#include <string.h>

int qtd[300];

int main () {
	int i, n, x, y, sum, sx, p, atual = 0;
	char temp[500];
	
	while(scanf("%d", &n) > 0 && n) {
		atual++;
		sum = sx = 0;
		
		for(i = 0; i < 300; i++)
			qtd[i] = 0;
		
		for(i = 0; i < n; i++) {
			scanf("%d %d", &x, &y);
			
			qtd[(y/x)] += x;
			sum += y;
			sx += x;
		}
		
		if(atual > 1)
			printf("\n");
		
		printf("Cidade# %d:\n", atual);
		
		p = 1;
		
		for(i = 0; i < 300; i++)
			if(qtd[i]) {
				printf("%s%d-%d", p ? "" : " ", qtd[i], i);
				p = 0;
			}
			
		sprintf(temp, "%.3lf", sum * 1.0 / sx);
		temp[strlen(temp)-1] = 0;
		
		printf("\nConsumo medio: %s m3.\n", temp);
	}
	
	return 0;
}
