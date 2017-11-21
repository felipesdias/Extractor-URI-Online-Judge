// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: The Race of Slugs
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1789

#include <stdio.h>

int main() {
	int n, maior, entrada;
	
	while(scanf("%d", &n) > 0) {
		maior = 0;
		
		while(n--) {
			scanf("%d", &entrada);
			
			if(entrada > maior)
				maior = entrada;
		}
		
		printf("%d\n", maior < 10 ? 1 : maior < 20 ? 2 : 3);
	}
	
	return 0;
}
