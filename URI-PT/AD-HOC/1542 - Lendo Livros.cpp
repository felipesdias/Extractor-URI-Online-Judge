// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Lendo Livros
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1542

#include <stdio.h>

int main () {
	int q, d, p;
	
	while(scanf("%d", &q) > 0 && q) {
		scanf("%d %d", &d, &p);
		
		printf("%d pagina%s\n", (d*p*q)/(p-q), (d*p*q)/(p-q) == 1 ? "" : "s");
	}
	
	return 0;
}
