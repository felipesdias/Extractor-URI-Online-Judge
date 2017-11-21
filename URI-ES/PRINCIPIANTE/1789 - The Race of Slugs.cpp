// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: The Race of Slugs
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1789

#include <stdio.h>

int main() {
	int n, maior, entrada;
	
	while(scanf("%d", &n) > 0) {
		maior = 0;
		
		while(n--) {
			scanf("%d", &entrada);
			
			if(entrada > maior)
				maior = entrada;
		}
		
		printf("%d\n", maior < 10 ? 1 : maior < 20 ? 2 : 3);
	}
	
	return 0;
}
