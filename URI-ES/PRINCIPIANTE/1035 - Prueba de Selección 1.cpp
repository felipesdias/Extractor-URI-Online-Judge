// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Prueba de Selección 1
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1035

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if(b > c && d > a && c+d > a+b && c > 0 && d > 0 && a%2 == 0)
		cout << "Valores aceitos\n";
	else
		cout << "Valores nao aceitos\n";
	
	return 0;
}
