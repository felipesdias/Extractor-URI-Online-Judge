// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Head or Tail
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1329

#include <cstdio>

int main () {
	int n, i, entrada, mary, john;
	
	scanf("%d", &n);
	
	while(n != 0) {
		john = mary = 0;
	
		for(i = 0; i < n; i++) {
			scanf("%d", &entrada);
			if (entrada == 1)
				john++;
			else if (entrada == 0)
				mary++;
		}
		
		printf("Mary won %d times and John won %d times\n", mary, john);
		
		scanf("%d", &n);
	}
	
	return 0;
}

