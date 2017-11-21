// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Promedios Ponderados
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1079

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	double n, aux, soma;
	cin >> n;
	
	
	for(int i=0; i<n; i++) {
		soma=0;
		cin >> aux;
		soma += aux*2;
		cin >> aux;
		soma += aux*3;
		cin >> aux;
		soma += aux*5;
		printf("%.1lf\n", soma/10.0);
	}
		
	return 0;
}
