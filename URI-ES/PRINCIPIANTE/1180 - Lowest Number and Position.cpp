// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Lowest Number and Position
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1180

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int menor = INT_MAX, pos = 0, num;
	
	int n;
	
	cin >> n;
	
	for(int i=0; i<n; i++) {
		scanf("%d", &num);
		
		if(num < menor) {
			pos = i;
			menor = num;
		}
	}
	
	printf("Menor valor: %d\nPosicao: %d\n", menor, pos);
	
}
