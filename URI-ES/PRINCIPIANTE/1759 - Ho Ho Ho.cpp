// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Ho Ho Ho
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1759

#include <stdio.h>

int main() {
	int n;
	
	scanf("%d", &n);
	
	while(n--) 
		printf("%s%s", "Ho", n != 0 ? " " : "!\n");
	
	return 0;
}
