// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Sequencia IJ 3
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1097

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	int aux, i,j = 1;
	
	for(i=1, aux=0; i<=9; i+=2, aux++) {
		j=7+2*aux;
		printf("I=%d J=%d\n", i,j);
		printf("I=%d J=%d\n", i,j-1);
		printf("I=%d J=%d\n", i,j-2);
	}
	
	return 0;
}
