// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Tipos de Triângulos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1045

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

bool compara(int a, int b) { return a > b; }

int main() {
	double a, b, c;
	double vet[3];
	cin >> vet[0] >> vet[1] >> vet[2];
	
	sort(vet, vet+3, compara);
	
	a = vet[0];
	b = vet[1];
	c = vet[2];
	
	if( !(a >= b+c) ) {
		if(a*a == b*b + c*c)
			puts("TRIANGULO RETANGULO");
		else if(a*a > b*b + c*c)
			puts("TRIANGULO OBTUSANGULO");
		else if(a*a < b*b + c*c)
			puts("TRIANGULO ACUTANGULO");
		
		if(a == b && b == c)
			puts("TRIANGULO EQUILATERO");
		else if(a == b || b == c || a == c)
			puts("TRIANGULO ISOSCELES");
	} else
		puts("NAO FORMA TRIANGULO");
	
	
	return 0;
}
