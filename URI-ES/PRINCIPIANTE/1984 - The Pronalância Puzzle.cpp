// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: The Pronalância Puzzle
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1984

#include <stdio.h>
#include <string.h>

int main() {
	char entrada[99];
	int i;
	
	scanf("%s", entrada);
	
	for(i = strlen(entrada)-1; i >= 0; i--)
		printf("%c", entrada[i]);
	printf("\n");
}
