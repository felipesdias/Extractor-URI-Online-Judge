// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Array fill I
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1173

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
	
	scanf("%d", &n);
	
	for(int i=0; i<10; i++) {
		printf("N[%d] = %d\n", i, n);
		n += n;
	}

	return 0;
}
