// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Frequência de Letras
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1255

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {

	char c;
	int n, i ,j;
	int letras[255];
	int maior;
	
	cin >> n;
	cin.get();
	
	for(i=0; i<n; i++) {
		for(j=0; j<255; j++)
			letras[j] = 0;
		maior = 0;
	
		cin.get(c);
		while (c != '\n') {
			if(c >= 'a' && c<= 'z' || c >= 'A' && c<= 'Z') {
				c = tolower(c);
				letras[(int)c]++;
				if(letras[(int)c] > maior)
					maior = letras[(int)c];
			}
			cin.get(c);
		}
		//cout << maior << endl;
		for(j=0; j<255; j++) {
			if(letras[j] == maior)
				printf("%c%", (char)j);
			//cout << (char)j << " = " << letras[j] << endl;
		}
		printf("\n");
		//cout << i << endl;
	}
	
	return 0;
}
