// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Sequência de Números e Soma
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1101

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
	while(vet[0] > 0 && vet[1] > 0) {
		soma = 0;

		sort(vet, vet+2);

		for(int i=vet[0]; i<=vet[1]; i++) {
			soma += i;
			printf("%d ", i);
		}
		
			printf("Sum=%d\n", soma);
		scanf("%d%d", &vet[0], &vet[1]);
	}

}

