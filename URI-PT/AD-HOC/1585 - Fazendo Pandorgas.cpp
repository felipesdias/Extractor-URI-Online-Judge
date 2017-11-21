// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Fazendo Pandorgas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1585

#include <stdio.h>

int main() {
	int n, a, b;
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%d %d", &a, &b);
		
		printf("%d cm2\n", a*b/2);
	}
	
	return 0;
}
