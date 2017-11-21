// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Reading Books
// Level: 1
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1542

#include <stdio.h>

int main () {
	int q, d, p;
	
	while(scanf("%d", &q) > 0 && q) {
		scanf("%d %d", &d, &p);
		
		printf("%d pagina%s\n", (d*p*q)/(p-q), (d*p*q)/(p-q) == 1 ? "" : "s");
	}
	
	return 0;
}
