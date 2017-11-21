// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Jogo da Estratégia
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1940

#include <bits/stdc++.h>
using namespace std;

int main() {
	int j, r, n, aux;
	int jogadas[600];
	
	cin >> j >> r;
	n = j*r;
	
	fill(jogadas, jogadas+j, 0);
	
	int maior = 0;
	int pos;
	
	for(int i=0; i<n; i++) {
		scanf("%d", &aux);
		jogadas[i%j] += aux;
		
		if(jogadas[i%j] >= maior) {
			maior = jogadas[i%j];
			pos = i%j + 1;
		}
	}
	
	cout << pos << endl;
}

