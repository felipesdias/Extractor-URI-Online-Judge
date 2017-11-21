// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Perguntas mais Frequentes
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1553

#include <cstdio>

int main () {
	int n, k, p[100], entrada, saida, i;
	
	scanf("%d %d", &n, &k);
	
	while(n != 0 && k != 0) {
		saida = 0;
		for(i = 0; i<100; i++)
			p[i] = 0;
		
		while(n > 0) {
			scanf("%d", &entrada);
			p[entrada-1]++;
			n--;
		}
		
		for(i = 0; i<100; i++) {
			if(p[i] >= k)
				saida++;
		}
		
		printf("%d\n", saida);
		
		scanf("%d %d", &n, &k);
	}
	
	return 0;
}

