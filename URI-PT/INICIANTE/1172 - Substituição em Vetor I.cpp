// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Substituição em Vetor I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1172

#include <bits/stdc++.h>

using namespace std;

bool crivoB[10000001]; //False = Primo,  True = Não Primo

void crivoBool(int max) {
	crivoB[0] = crivoB[1] = true;
	for(int i=2; i<=max; i++)
		if(!crivoB[i])
			for(int j=i+i; j<=max; j+=i)
				crivoB[j] = true;
}

int main() {
	
	int n;
	
	for(int i=0; i<10; i++) {
		scanf("%d", &n);
		if(n > 0)
			printf("X[%d] = %d\n", i, n);
		else
			printf("X[%d] = 1\n", i);
	}

	return 0;
}
