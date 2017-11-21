// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Clasificación Simple
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1042

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int vet[3], vet2[3];
	
	cin >> vet[0] >> vet[1] >> vet[2];
	vet2[0] = vet[0];
	vet2[1] = vet[1];
	vet2[2] = vet[2];
	
	sort(vet, vet+3);
	
	printf("%d\n%d\n%d\n\n", vet[0], vet[1], vet[2]);
	printf("%d\n%d\n%d\n", vet2[0], vet2[1], vet2[2]);
		
	return 0;
}
