// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Hashmat the Brave Warrior
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1198

#include <cstdio>

int main () {
	long long int a, b;
	
	while(scanf("%lld %lld", &a, &b) != EOF) 
		printf("%lld\n", b > a ? b-a : a-b);
	
	return 0;
}

