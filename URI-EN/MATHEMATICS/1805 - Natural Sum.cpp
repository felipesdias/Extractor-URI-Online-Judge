// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Natural Sum
// Level: 1
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1805

#include <stdio.h>

int main() {
	long long int a, b;
	
	scanf("%lld %lld", &a, &b);
	
	printf("%lld\n", (a+b)*(b-a+1)/2);
	
	return 0;
}
