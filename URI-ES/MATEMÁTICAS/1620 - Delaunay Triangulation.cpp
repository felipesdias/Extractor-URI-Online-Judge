// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Delaunay Triangulation
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1620

#include <stdio.h>

int main () {
	double a;
	
	while(scanf("%lf", &a) && a > 0) 
		printf("%.6lf\n", (a-3)/a);
	
	return 0;
} 
