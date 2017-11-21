// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Prime Number
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1165

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
	
	crivoBool(10000000);
	
	int n, num;
	
	scanf("%d", &n);
	
	while(n--)
		if(scanf("%d", &num) && crivoB[num])
			printf("%d nao eh primo\n", num);
		else
			printf("%d eh primo\n", num);

	return 0;
}
