// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: O Escolhido
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1983

#include <stdio.h>

int main() {
	double e, maior = 0;
	int m, mat, n;
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%d %lf", &m, &e);
		
		if(e > maior) {
			maior = e;
			mat = m;
		}
	}
	
	if(maior < 8)
		puts("Minimum note not reached");
	else
		printf("%d\n", mat);
}
