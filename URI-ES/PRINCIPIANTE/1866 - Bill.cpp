// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Bill
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1866

#include <stdio.h>

int main() {
	int n, a;
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%d", &a);
		
		printf("%d\n", a % 2);
	}

	return 0;
}
