// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Hashmat the Brave Warrior
// Level: 1
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1198

#include <cstdio>

int main () {
	long long int a, b;
	
	while(scanf("%lld %lld", &a, &b) != EOF) 
		printf("%lld\n", b > a ? b-a : a-b);
	
	return 0;
}

