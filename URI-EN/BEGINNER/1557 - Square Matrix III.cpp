// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Square Matrix III
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1557

#include <cstdio>
#include <cmath>

int main () {
	int n, i, j, nDigits;
	
	scanf("%d", &n);
	while(n != 0) {
		nDigits = floor(log10(pow(2, n+n-2))) + 1;
		
		for(i = 0; i < n; i++) {
			j = 0;
			printf("%*d", nDigits, (int) pow(2, (i+j)));
			for(j = 1; j < n; j++)
				printf(" %*d", nDigits, (int) pow(2, (i+j)));
			printf("\n");
		}
		printf("\n");
	
		scanf("%d", &n);
	}
	
	return 0;
}

