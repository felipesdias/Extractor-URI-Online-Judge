// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Distancia Entre dos Puntos
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1015

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

 
int main() {
	float a, b, c, d;
	cin >> a >> b >> c >> d;
	
	printf("%.4f\n", sqrt( (c-a)*(c-a) + (d-b)*(d-b) ));
}
