// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Sub-prime
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1105

#include <cstdio>

int main() {
	int b, n, d, c, v, rend[25];
	bool possivel;
	
	scanf("%d %d", &b, &n);
	
	while(b && n) {
		possivel = true;
		
		for(int i=1; i<=b; i++) {
			scanf("%d", &d);
			rend[i] = d;
		}
		
		for(int i=0; i<n; i++) {
			scanf("%d %d %d", &d, &c, &v);
			rend[d] -= v;
			rend[c] += v;
		}
		
		for(int i=1; i<=b; i++) {
			if(rend[i] < 0) {
				possivel = false;
				break;
			}
		}
			
		if(possivel)
			printf("S\n");
		else
			printf("N\n");
		
		scanf("%d %d", &b, &n);
	}
	
	return 0;
}
