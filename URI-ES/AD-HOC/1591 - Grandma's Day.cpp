// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Grandma's Day
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1591

#include <stdio.h>
#include <string.h>

int main () {
	int t, l, c, i, j, p, k, count, tamProcurada;
	char palavra[500][60], procurada[60], entrada;
	
	scanf("%d", &t);
	
	while(t--) {
		scanf("%d %d", &l, &c);
		
		for(i = 0; i < l; i++)
			for(j = 0; j < c; j++) {
				scanf(" %c", &entrada);
				
				palavra[i][j] = entrada;
				palavra[j+l][i] = entrada;
			}
			
		scanf("%d", &p);
		
		while(p--) {
			scanf("%s", procurada);
			
			count = 0;
			tamProcurada = strlen(procurada);
			tamProcurada--;
			
			for(i = 0; i < l+c; i++) {
				for(j = 0; i < l ? j < c-tamProcurada : j < l-tamProcurada; j++) {
					for(k = 0; k <= tamProcurada; k++) 
						if(procurada[k] != palavra[i][j+k])
							break;
					if(k == tamProcurada + 1)
						count++;
				}
			}
			
			if(tamProcurada == 0)
				count /= 2;
			
			printf("%d\n", count);
		}
	}

	return 0;
}
