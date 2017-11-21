// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Welcome to the Winter!
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1847

#include <stdio.h>

int main () {
	int a, b, c, f;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(b < a && c >= b)
		f = 1;
	if(b > a && c <= b)
		f = 0;
	if(b > a && c-b < b-a)
		f = 0;
	if(b > a && c-b >= b-a)
		f = 1;
	if(b < a && c-b > b-a)
		f = 1;
	if(b < a && c-b <= b-a)
		f = 0;
	if(b == a)
		f = c > b;
	
	printf(":%c\n", f ? ')' : '(');
	
	return 0;
}
