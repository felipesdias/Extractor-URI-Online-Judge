// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Sequence of Numbers and Sum
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1101

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

