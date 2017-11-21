// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Organizador de Vagões
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1162

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	
	scanf("%*d");
	
	int m1[1000];
	int m2[1000];
	while(cin >> n) {
		for(int i=0; i<n; i++)
			m1[i] = i + 1;
		
		for(int i=0; i<n; i++)
			scanf("%d", &m2[i]);
			
		int cont = 0;
		for(int i=0; i<n; i++) {
			for(int j=i; j<n; j++) {
				if(m1[i] == m2[j]) {
					while(j>i) {
						cont++;
						swap(m2[j-1], m2[j]);
						j--;
					}
					break;
				}
			}
		}
		
		cout << "Optimal train swapping takes " << cont << " swaps.\n";
	}

	return 0;
}

