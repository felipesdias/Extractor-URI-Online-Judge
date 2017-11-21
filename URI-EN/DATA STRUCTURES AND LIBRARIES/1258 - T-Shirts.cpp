// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: T-Shirts
// Level: 3
// Category: DATA STRUCTURES AND LIBRARIES
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1258

#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

typedef struct tCamisa {
	char tamanho, cor[9], nome[61];
} tCamisa;

int cmp(tCamisa a, tCamisa b) {
	if(a.cor[0] == 'b' && b.cor[0] == 'v')
		return false;
	else if(a.cor[0] == 'v' && b.cor[0] == 'b')
		return true;
	
	if(a.tamanho != b.tamanho)
		return a.tamanho < b.tamanho;
	
	return strcmp(a.nome, b.nome) > 0;
}

int main() {
	tCamisa camisas[61];
	int n, i, primeiro = 1;
	
	while(scanf("%d%*c", &n) && n) {
		for(i = 0; i < n; i++) {
			gets(camisas[i].nome);
			scanf("%s %c%*c", camisas[i].cor, &camisas[i].tamanho);
		}
		
		sort(camisas, camisas+n, cmp);
		
		printf("%s", primeiro ? "" : "\n");
		for(i = n-1; i >= 0; i--) 
			printf("%s %c %s\n", camisas[i].cor, camisas[i].tamanho, camisas[i].nome);
		
		primeiro = 0;
	}
	
	return 0;
}
