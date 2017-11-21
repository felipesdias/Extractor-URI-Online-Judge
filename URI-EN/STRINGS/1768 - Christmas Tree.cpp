// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Christmas Tree
// Level: 2
// Category: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1768

#include <bits/stdc++.h>

using namespace std;

int main() {
	int tam, aux;

	while(cin >> tam) {
		
		aux = tam/2;
		
		while(aux != -1) {
			for(int i=0; i<aux; i++)
				printf(" ");
			for(int i=tam-aux*2; i>0; i--)
				printf("*");
			printf("\n");
			aux--;
		}

		aux = tam/2;
		for(int i=0; i<aux; i++)
			printf(" ");
		printf("*\n");
		aux--;
		for(int i=0; i<aux; i++)
			printf(" ");
		printf("***\n");

		cout << endl;
	}

	return 0;
}
