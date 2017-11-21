// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Matriz de Quadrados
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1578

#include <stdio.h>
#include <string.h>

unsigned long long int matriz[30][30];
int casas[30];
char temp[50];

int main () {
	int n, m, i, j, k;
	
	scanf("%d", &n);
	
	for(k = 0; k < n; k++) {
		if(k != 0)
			printf("\n");
		
		scanf("%d", &m);
		
		for(i = 0; i < m; i++)
			casas[i] = 0;
		
		for(i = 0; i < m; i++) {
			for(j = 0; j < m; j++) {
				scanf("%llu", &matriz[i][j]);
				
				matriz[i][j] *= matriz[i][j];
				
				sprintf(temp, "%llu", matriz[i][j]);
				
				if(strlen(temp) > casas[j])
					casas[j] = strlen(temp);
			}
		}
		
		printf("Quadrado da matriz #%d:\n", k+4);
		
		for(i = 0; i < m; i++) {
			printf("%*llu", casas[0], matriz[i][0]);
			for(j = 1; j < m; j++) 
				printf(" %*llu", casas[j], matriz[i][j]);
			printf("\n");
		}
	}
	
	return 0;
}
