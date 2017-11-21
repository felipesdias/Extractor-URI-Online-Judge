// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Salário
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1008

#include <stdio.h>
 
int main() {
	int a, b;
	double c;

	scanf("%d%d%lf",&a,&b,&c);
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n",a,(double)b*c);
 
    return 0;
}
