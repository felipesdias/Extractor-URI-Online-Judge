// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Matriz 123
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1534

#include <cstdio>

int main() {
	int n, linha, coluna, val;
	
	while(scanf("%d", &n) != EOF) {
		for(linha = 0; linha < n; linha++) {
			for(coluna = 0; coluna < n; coluna++) {
				if((n-coluna-1) == linha)
					val = 2;
				else if(coluna == linha)
					val = 1;
				else
					val = 3;
				
				printf("%d", val);
				
				if(coluna == n-1 ) 
					printf("\n");
			}
		}
	}
	
	return 0;
}

