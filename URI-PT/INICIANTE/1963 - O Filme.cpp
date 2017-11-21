// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: O Filme
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1963

#include <stdio.h>

int main() {
	double a, b;
	
	scanf("%lf %lf", &a, &b);
	
	printf("%.02lf%%\n", 100.0*(b-a)/a);
}
