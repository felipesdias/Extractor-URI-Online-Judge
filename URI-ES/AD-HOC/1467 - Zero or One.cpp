// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Zero or One
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1467

#include <cstdio>

int main () {
	int a, b, c;
	
	while(scanf("%d %d %d", &a, &b, &c) != EOF) 
		printf("%c\n", a == b && b == c ? '*' : a == b ? 'C' : b == c ? 'A' : 'B');
	
	return 0;
}
