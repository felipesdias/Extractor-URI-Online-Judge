// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Sum of Consecutive Odd Nu...
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1099

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;

int main() {
	int n, soma;
	
	int vet[2];
	
	cin >> n;
	
	while(n--) {
		soma = 0;
		scanf("%d%d", &vet[0], &vet[1]);

		sort(vet, vet+2);

		for(int i=vet[0]+1; i<vet[1]; i++)
			if(i%2)
				soma += i;
		
		printf("%d\n", soma);
	}

}

