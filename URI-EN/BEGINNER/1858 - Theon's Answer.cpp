// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Theon's Answer
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1858

#include <stdio.h>

int main () {
	int menor, i, n, pessoas[200];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
		scanf("%d", &pessoas[i]);
	
	menor = 0;
	
	for(i = 1; i < n; i++)
		if(pessoas[i] < pessoas[menor])
			menor = i;
		
	printf("%d\n", menor+1);
	
	return 0;
}
