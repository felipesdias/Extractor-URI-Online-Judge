// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: A Long, Long Time Ago
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1962

#include <stdio.h>

int main() {
	int n, e;
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%d", &e);
		
		e -= 2015;
		
		printf("%d %s\n", e >= 0 ? e+1 : -e, e >= 0 ? "A.C." : "D.C.");
	}
}
