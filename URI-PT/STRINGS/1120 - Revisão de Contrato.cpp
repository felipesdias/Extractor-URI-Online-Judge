// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Revisão de Contrato
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1120

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main() {

	char num[102];
	char c;
	char aux;
	int i, tam;
	bool zerou;
	
	scanf("%c" ,&c);
	scanf("%c" ,&aux);
	scanf("%c" ,&aux);
	i=0;
	zerou = false;
	while(aux != '\n') {
		num[i] = aux;
		i++;
		scanf("%c" ,&aux);
	}
	num[i] = '\0';
	tam = i;
	
	while(c != '0' || num[0] != '0') {
		for(i=0; i<tam; i++) {
			if(num[i] != c) {
				if(num[i] != '0' || zerou)
					printf("%c", num[i]);
				
				if(num[i] != '0')
					zerou = true;
			}
		}
		if(!zerou)
			printf("0");
		printf("\n");
		
		
		
		scanf("%c" ,&c);
		scanf("%c" ,&aux);
		scanf("%c" ,&aux);
		i=0;
		zerou = false;
		while(aux != '\n') {
			num[i] = aux;
			i++;
			scanf("%c" ,&aux);
		}
		num[i] = '\0';
		tam = i;
	}
	
	return 0;
}
