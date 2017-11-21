// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: O Bravo Guerreiro Hashmat
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1198

#include <cstdio>

int main () {
	long long int a, b;
	
	while(scanf("%lld %lld", &a, &b) != EOF) 
		printf("%lld\n", b > a ? b-a : a-b);
	
	return 0;
}

