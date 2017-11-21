// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Functions
// Level: 1
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1555

#include <stdio.h>

int main() {
	long long int a, b;
	int n;
	
	scanf("%d", &n); 
	
	while(n--) {
		scanf("%lld %lld", &a, &b);
	
		printf("%s ganhou\n", (3*a)*(3*a) + (b*b) > 2*(a*a) + (5*b)*(5*b) && (3*a)*(3*a) + (b*b) > -100*a + b*b*b ? "Rafael" : 2*(a*a) + (5*b)*(5*b) > -100*a + b*b*b ? "Beto" : "Carlos");
	}
	
	return 0;
}
