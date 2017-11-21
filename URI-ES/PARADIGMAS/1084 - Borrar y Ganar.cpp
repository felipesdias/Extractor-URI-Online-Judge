// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Borrar y Ganar
// Nível: %d
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1084

#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <climits>
#include <stack>


using namespace std;


int main() {
	int n, m, aux;
	char c;
	
	char num[200000];
	
	while(scanf("%d%d", &n, &m) && n && m) {
		scanf("%c", &c);
		
		aux = m;
		stack<char> pilha;

		for(int i=0; i<n; i++) {
			scanf("%c", &c);
			while(!pilha.empty() && pilha.top() < c && m) {
				pilha.pop();
				m--;
			}
			pilha.push(c);
		}
		
		while(m) {
			pilha.pop();
				m--;
		}
		
		num[n-aux] = '\0';
		
		for(int i=n-aux-1; i>=0; i--) {
			num[i] = pilha.top();
			pilha.pop();
		}
		
		printf("%s\n", num);
	}
}

