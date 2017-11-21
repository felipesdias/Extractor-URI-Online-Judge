// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Economic Phonebook
// Level: 2
// Category: DATA STRUCTURES AND LIBRARIES
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1211

#include <stdio.h>
#include <string.h>

typedef struct tNo {
	tNo *vFilhos[10];
	
	tNo () {
		for(int i = 0; i < 10; i++)
			vFilhos[i] = NULL;
	}
	~tNo () {
		for(int i = 0; i < 10; i++)
			if(vFilhos[i])
				delete vFilhos[i];
	}
} tNo;

int main () {
	tNo *raiz, *atual;
	int n, qtdNos, qtdTotal, i;
	char entrada[201];
	
	while(scanf("%d%*c", &n) > 0) {
		raiz = new tNo;
		qtdNos = qtdTotal = 0;
		
		while(n--) {
			gets(entrada);
			
			atual = raiz;
			qtdTotal += strlen(entrada);
			
			for(i = 0; i < strlen(entrada); i++) {
				if(!atual->vFilhos[entrada[i]-'0']) {
					atual->vFilhos[entrada[i]-'0'] = new tNo;
					qtdNos++;
				}
				atual = atual->vFilhos[entrada[i]-'0'];
			}
		}
		
		printf("%d\n", qtdTotal - qtdNos);
		
		delete raiz;
	}
	
	return 0;
}
