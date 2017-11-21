// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Área
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1012

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;
 
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", (a*c)/2, 3.14159*c*c, ((a+b)*c)/2.0, b*b, a*b);
}
