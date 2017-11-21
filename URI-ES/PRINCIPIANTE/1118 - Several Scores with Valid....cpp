// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Several Scores with Valid...
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1118

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;


int main() {
	double nota, cont, soma;
	int opcao = 1;
	
	while(opcao == 1) {
		cont = soma = 0;
		while(cont < 2) {
			scanf("%lf", &nota);
			if(nota >= 0 && nota <= 10) {
				soma += nota;
				cont++;
			} else
				puts("nota invalida");
		}
		printf("media = %.2lf\n", soma/cont);
		
		do {
			puts("novo calculo (1-sim 2-nao)");
			scanf("%d", &opcao);
		} while(opcao != 1 && opcao != 2);	
	}
}

