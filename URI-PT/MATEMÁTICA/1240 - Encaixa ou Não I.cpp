// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Encaixa ou Não I
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1240

#include <stdio.h>
#include <string.h>

int main () {
	int n;
	char a[20], b[20];
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%s %s", a, b);
		
		printf("%s\n", !strcmp(a+strlen(a)-strlen(b), b) ? "encaixa" : "nao encaixa");
	}
	
	return 0;
}
