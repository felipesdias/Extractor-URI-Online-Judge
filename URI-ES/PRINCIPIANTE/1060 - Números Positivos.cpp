// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Números Positivos
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1060

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	double a;
	int cont = 0;
	for(int i=0; i<6; i++) {
		cin >> a;
		if(a > 0)
			cont++;
	}
	cout << cont << " valores positivos\n";
}
