// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Array change I
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1175

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int vet[20];
	
	
	for(int i=0; i<20; i++)
		scanf("%d", &vet[i]);

	reverse(vet, vet+20);

	for(int i=0; i<20; i++)
		printf("N[%d] = %d\n", i, vet[i]);
	
	return 0;
}
