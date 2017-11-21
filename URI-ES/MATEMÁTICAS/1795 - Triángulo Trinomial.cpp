// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Triángulo Trinomial
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1795

#include <stdio.h>

int main() {
	int n;
	long long int resp = 1;
	
	scanf("%d", &n);
	
	while(n--)
		resp *= 3;
	
	printf("%lld\n", resp);
	
	return 0;
}
