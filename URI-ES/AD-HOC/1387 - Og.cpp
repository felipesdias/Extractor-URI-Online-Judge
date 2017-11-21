// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Og
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1387

#include <cstdio>

int main () {
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	while(a != 0 && b != 0) {
		printf("%d\n", a+b);
		
		scanf("%d %d", &a, &b);
	}
	
	return 0;
}

