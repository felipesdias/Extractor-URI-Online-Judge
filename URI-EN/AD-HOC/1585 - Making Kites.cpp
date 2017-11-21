// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Making Kites
// Level: 1
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1585

#include <stdio.h>

int main() {
	int n, a, b;
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%d %d", &a, &b);
		
		printf("%d cm2\n", a*b/2);
	}
	
	return 0;
}
