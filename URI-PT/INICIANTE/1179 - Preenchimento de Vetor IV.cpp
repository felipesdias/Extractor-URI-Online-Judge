// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Preenchimento de Vetor IV
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1179

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	queue<int> par;
	queue<int> impar;
	
	int n=15;
	
	int num;
	int cont;
	
	while(n--) {
		scanf("%d", &num);
		
		if(num%2)
			impar.push(num);
		else
			par.push(num);
		
		if(impar.size() == 5) {
			cont = 0;
			while(!impar.empty()) {
				printf("impar[%d] = %d\n", cont, impar.front());
				impar.pop();
				cont++;
			}
		} else if(par.size() == 5) {
			cont = 0;
			while(!par.empty()) {
				printf("par[%d] = %d\n", cont, par.front());
				par.pop();
				cont++;
			}
		}
	}
	
	cont = 0;
	while(!impar.empty()) {
		printf("impar[%d] = %d\n", cont, impar.front());
		impar.pop();
		cont++;
	}
	
	cont = 0;
	while(!par.empty()) {
		printf("par[%d] = %d\n", cont, par.front());
		par.pop();
		cont++;
	}
	
}
