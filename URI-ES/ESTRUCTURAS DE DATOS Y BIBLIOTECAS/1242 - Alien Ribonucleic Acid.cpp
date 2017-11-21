// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Alien Ribonucleic Acid
// Nível: %d
// Categoria: ESTRUCTURAS DE DATOS Y BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1242

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	
	int cont = 0;
	while(cin>>s) {
		cont = 0;
		
	stack<char> pilha;
		
		for(size_t i=0; i<s.size(); i++) {
			if(pilha.empty())
				pilha.push(s[i]);
			else if((pilha.top() == 'B' && s[i] == 'S') ||
				   (pilha.top() == 'S' && s[i] == 'B') ||
				   (pilha.top() == 'F' && s[i] == 'C') ||
				   (pilha.top() == 'C' && s[i] == 'F')) {
						pilha.pop();
						cont++;
					}
			else
				pilha.push(s[i]);
		}
		
		cout << cont << endl;
	}
	
	return 0;
}

