// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Grenais
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1131

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;


int main() {
	int a, b;
	int vInter = 0, vGremio = 0, empate = 0, cont = 0;
	int opcao;
	
	do {
		scanf("%d%d%d", &a, &b, &opcao);
		puts("Novo grenal (1-sim 2-nao)");

		if(a > b)
			vInter++;
		else if(b > a)
			vGremio++;
		else
			empate++;
		
		cont++;
	} while(opcao == 1);
	
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", cont, vInter, vGremio, empate);
	if(vInter > vGremio)
		puts("Inter venceu mais");
	else if(vGremio > vInter)
		puts("Gremio venceu mais");
	else
		puts("Nao houve vencedor");
	
}

