// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Positivos e Média
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1064

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	double a;
	double soma = 0;
	int cont = 0;
	for(int i=0; i<6; i++) {
		cin >> a;
		if(a > 0) {
			cont++;
			soma += a;
		}
	}
	cout << cont << " valores positivos\n";
	printf("%.1lf\n", soma/cont);
}
