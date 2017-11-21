// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: O Enigma do Pronalândia
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1984

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
