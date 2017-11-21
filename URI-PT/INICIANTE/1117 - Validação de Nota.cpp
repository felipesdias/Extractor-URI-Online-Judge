// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Validação de Nota
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1117

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;


int main() {
	double nota, soma=0;
	int cont=0;
	
	while(cont < 2) {
		cin >> nota;
		if(nota >= 0 && nota <= 10) {
			soma += nota;
			cont++;
		} else
			puts("nota invalida");
	}
	
	printf("media = %.2lf\n", soma/cont);
	
	
}

