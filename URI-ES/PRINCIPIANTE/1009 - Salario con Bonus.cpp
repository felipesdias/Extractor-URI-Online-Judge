// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Salario con Bonus
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1009

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;
 
int main() {
	double a, b;
	string nome;

	cin >> nome >> a >> b;
	
	a += (15*b)/100;
	
	printf("TOTAL = R$ %.2lf\n", a);
 
    return 0;
}
