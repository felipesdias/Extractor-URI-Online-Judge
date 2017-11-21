// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: FACE 2015 FREE GIFT
// Nível: %d
// Categoria: ESTRUCTURAS DE DATOS Y BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1944

#include <cstdio>
#include <stack>

int main() {
	int n, cont = 0;
	char insere[4], ultimas[4];
	bool igual;
	std::stack<char> painel;
	
	scanf("%d", &n);
	getchar();
	
	while(n--) {
		igual = true;
		
		if(painel.empty()) {
			ultimas[0] = 'F';
			ultimas[1] = 'A';
			ultimas[2] = 'C';
			ultimas[3] = 'E';
			
			for(int i=0; i<4; i++)
				painel.push(ultimas[i]);
		}

		for(int i=0; i<4; i++) {
			scanf("%c ", &insere[i]);
			if(insere[i] != ultimas[3-i])
				igual = false;
		}
		
		if(igual) {
			for(int i=0; i<4; i++)
				painel.pop();
			cont++;
			
			if(!painel.empty()) {
				std::stack<char> aux(painel);
				for(int i=0; i<4; i++) {
					ultimas[3-i] = aux.top();
					aux.pop();
				}
			}
		}
		else {
			for(int i=0; i<4; i++)
				painel.push(insere[i]);
			
			ultimas[0] = insere[0];
			ultimas[1] = insere[1];
			ultimas[2] = insere[2];
			ultimas[3] = insere[3];
		}
	}
	
	printf("%d\n", cont);
	
	return 0;
}
