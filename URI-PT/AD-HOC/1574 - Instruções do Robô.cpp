// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Instruções do Robô
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1574

#include <stdio.h>
#include <stdlib.h>

int main () {
	int n, t, count, i, inst[200];
	char entrada[100];
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%d", &t);
		count = 0;
		
		scanf("%*c");
		for(i = 1; i <= t; i++) {
			gets(entrada);
			
			if(entrada[0] == 'L')
				inst[i] = -1;
			else if(entrada[0] == 'R')
				inst[i] = 1;
			else
				inst[i] = inst[atoi(entrada+8)];
			
			count += inst[i];
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}
