// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Eleições
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2084

#include <cstdio>

int main() {
	int n,  qnt = 0, maior = 0, maiorI, votos[15];
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &votos[i]);
		qnt += votos[i];
		if(votos[i] > maior) {
			maior = votos[i];
			maiorI = i;
		}
	}
	
	if((double)(100*maior)/qnt >= 45.0)
		printf("1\n");
	else if((double)(100*maior)/n >= 40.0) {
		for(int i=0; i<n; i++) {
			if(i != maiorI && (double)(100*(maior-votos[i]))/qnt < 10.0) {
				printf("2\n");
				return 0;
			}
		}
		printf("1\n");
	}
	else
		printf("2\n");
	
	return 0;
}
