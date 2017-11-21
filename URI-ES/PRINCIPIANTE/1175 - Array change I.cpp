// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Array change I
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1175

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
