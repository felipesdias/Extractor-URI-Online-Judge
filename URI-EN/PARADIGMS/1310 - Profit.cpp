// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Profit
// Level: 3
// Category: PARADIGMS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1310

#include <cstdio>

int main () {
	long long int n, custo, valores[600], somas[600], i, max;
	
	while(scanf("%lld", &n) > 0) {
		scanf("%lld",  &custo);
		
		for(i = 0; i < n; i++) {
			scanf("%lld", &valores[i]);
			valores[i] -= custo;
		}
		
		if(valores[0] > 0)
			somas[0] = valores[0];
		else
			somas[0] = 0;
		
		max = somas[0];
		
		for(i = 1; i < n; i++) {
			if(somas[i-1] + valores[i] > 0)
				somas[i] = somas[i-1] + valores[i];
			else
				somas[i] = 0;
			
			if(somas[i] > max)
				max = somas[i];
		}
		
		printf("%lld\n", max);
	}
	
	return 0;
}
