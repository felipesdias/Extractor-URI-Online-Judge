// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Construindo Casas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1541

#include <cstdio>
#include <cmath>

int main () {
	int a, b, percent;
	
	scanf("%d", &a);
	
	while(a != 0) {
		scanf("%d %d", &b, &percent);
		
		printf("%d\n", (int) sqrt((a*b)/(percent/100.0)));
	
		scanf("%d", &a);
	}
	
	return 0;
}
