// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Counting Crow
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1848

#include <stdio.h>

int main () {
	char banana[50];
	int v = 0;
	
	while(gets(banana)) {
		if(banana[0] == 'c') {
			printf("%d\n", v);
			v = 0;
		}
		else {
			v += banana[0] == '*' ? 4 : 0;
			v += banana[1] == '*' ? 2 : 0;
			v += banana[2] == '*' ? 1 : 0;
		}
	}
}
