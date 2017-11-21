// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Ascendiendo y Descendiendo
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1113

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;

int main() {
	int soma;
	
	int vet[2];
	
	
	scanf("%d%d", &vet[0], &vet[1]);
	while(vet[0] != vet[1]) {
		
		if(vet[0] > vet[1])
			puts("Decrescente");
		else
			puts("Crescente");
		scanf("%d%d", &vet[0], &vet[1]);
	}

}

