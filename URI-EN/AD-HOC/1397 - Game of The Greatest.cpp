// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Game of The Greatest
// Level: 1
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1397

#include <cstdio>

int main () {
	int n, i, a, b, nA, nB;
	
	scanf("%d", &n);
	
	while(n != 0) {
		nA = nB = 0;
		
		for(i = 0; i < n; i++) {
			scanf("%d %d", &a, &b);
			if(a > b)
				nA++;
			if(b > a)
				nB++;
		}
		
		printf("%d %d\n", nA, nB);
		
		scanf("%d", &n);
	}
	
	return 0;
}

