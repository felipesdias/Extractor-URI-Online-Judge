// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Snack
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1038

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	int a, b;
	double vet[6] = {0, 4, 4.5, 5, 2, 1.5};
	
	cin >> a >> b;
	
	printf("Total: R$ %.2lf\n", vet[a]*b);
}
