// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Aumento de Salário
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1048

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	double a;
	double reajuste;
	
	cin >> a;

	if(a >= 0 && a <= 400)
		reajuste = 15;
	else if(a <= 800)
		reajuste = 12;
	else if(a <= 1200)
		reajuste = 10;
	else if(a <= 2000)
		reajuste = 7;
	else if(a > 2000)
		reajuste = 4;
	
	printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n", a+(a*reajuste/100.0), a*reajuste/100.0, reajuste);
	
	return 0;
}
