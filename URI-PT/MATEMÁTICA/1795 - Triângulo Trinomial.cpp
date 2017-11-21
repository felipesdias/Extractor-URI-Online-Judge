// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Triângulo Trinomial
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1795

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
