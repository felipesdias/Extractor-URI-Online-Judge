// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Grains in a Chess Board
// Level: 1
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1169

#include <cstdio>
#include <cmath>

int main () {
	int n, i, entrada;
	double saida;
	unsigned long long int saida2;
	
	scanf("%d", &n);
	
	while(n > 0) {
		saida = 0;
		
		scanf("%d", &entrada);
		
		for(i = 0; i < entrada; i++) {
			saida += pow(2, i);
		}
		
		saida2 = saida/12000;
		
		printf("%llu kg\n", saida2);
		
		n--;
	}
	
	return 0;
}

