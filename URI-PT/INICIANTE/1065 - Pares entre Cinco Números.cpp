// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Pares entre Cinco Números
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1065

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a;
	int soma = 0;
	int cont = 0;
	for(int i=0; i<5; i++) {
		cin >> a;
		if(a%2 == 0) {
			cont++;
		}
	}
	cout << cont << " valores pares\n";

}
