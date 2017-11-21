// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Triangulação de Delaunay
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1620

#include <stdio.h>

int main () {
	double a;
	
	while(scanf("%lf", &a) && a > 0) 
		printf("%.6lf\n", (a-3)/a);
	
	return 0;
} 
