// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Intervalo 2
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1072

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int aux;
	int cont = 0;
	
	cin >> n;
	
	for (int i=0; i<n; i++) {
		cin >> aux;
		if(aux >= 10 && aux <= 20)
			cont++;
	}
	
	cout << cont << " in\n";
	cout << n-cont << " out\n";

}
