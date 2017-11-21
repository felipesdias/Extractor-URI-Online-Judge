// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Soma Natural
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1805

#include <stdio.h>

int main() {
	long long int a, b;
	
	scanf("%lld %lld", &a, &b);
	
	printf("%lld\n", (a+b)*(b-a+1)/2);
	
	return 0;
}
