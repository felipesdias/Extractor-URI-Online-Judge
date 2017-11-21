// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Fibonacci, ¿Cuántas Llama...
// Nível: %d
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1029

#include <stdio.h>

int main () {
	long long int fibo[40], chamadas[40];
	int n, x, i;
	
	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;
	fibo[3] = 2;
	chamadas[0] = 1;
	chamadas[1] = 1;
	chamadas[2] = 2;
	chamadas[3] = 4;
	
	for(i = 4; i < 40; i++) {
		fibo[i] = fibo[i-1] + fibo[i-2];
		chamadas[i] = chamadas[i-1]+chamadas[i-2] + 2;
	}		
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%d", &x);
		
		printf("fib(%d) = %lld calls = %lld\n", x, chamadas[x], fibo[x]);
	}
	
	return 0;
}
