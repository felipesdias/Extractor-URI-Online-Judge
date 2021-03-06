// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Triángulo
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1043

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	double a, b, c;
	
	cin >> a >> b >> c;
	
	if(a < b+c && b < a+c && c < a+b && abs(b-c) < a && abs(a-c) < b && abs(a-b) < c)
		printf("Perimetro = %.1lf\n", a+b+c);
	else
		printf("Area = %.1lf\n", ((a+b)*c)/2);
		
	return 0;
}
