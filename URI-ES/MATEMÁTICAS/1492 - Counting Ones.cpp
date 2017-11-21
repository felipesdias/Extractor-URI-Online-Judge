// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Counting Ones
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1492

#include <bits/stdc++.h>

using namespace std;

unsigned long long fib[140] = {0};

unsigned long long v(unsigned long long resp) {
	if(resp == 0)
		return 0;
	
	int maiorPotencia;
	
	for(int i = 0; i < 62; i++)
		if(resp & (1ll << i))
			maiorPotencia = i;
	
	if(maiorPotencia)
		return (resp - (1ll << maiorPotencia)) + 1 + fib[maiorPotencia - 1] + v(resp - (1ll << maiorPotencia)); 
	
	return 1;
}

int main() {
	unsigned long long i, j, a, b;
	
	fib[0] = 1;
	fib[1] = 3;
	
	for(i = 1; i < 62; i++) {
		fib[i] = 1ll << i;
		for(j = 0; j < i; j++)
			fib[i] += fib[j];
	}
	
	for(i = 1; i < 62; i++)
		fib[i] += fib[i-1];
		
	while(scanf("%llu %llu", &a, &b) > 0)	
		printf("%llu\n", v(b) - v(a-1));
	
	return 0;
}

