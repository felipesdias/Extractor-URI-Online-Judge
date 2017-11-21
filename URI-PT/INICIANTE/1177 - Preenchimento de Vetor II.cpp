// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Preenchimento de Vetor II
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1177

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	
	cin >> n;
	
	for(int i=0; i<1000; i++)
		printf("N[%d] = %d\n", i, i%n);
}
