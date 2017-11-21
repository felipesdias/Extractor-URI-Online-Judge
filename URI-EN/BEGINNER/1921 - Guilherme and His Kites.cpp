// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Guilherme and His Kites
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1921

#include <stdio.h>

int main () {
	long long int n;
	
	scanf("%lld", &n);
	
	printf("%lld\n", (n-3)*(2 + n-2)/2);
	
	return 0;
}
