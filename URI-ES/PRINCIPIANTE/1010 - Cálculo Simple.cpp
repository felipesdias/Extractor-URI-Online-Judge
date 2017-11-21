// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Cálculo Simple
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1010

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;
 
int main() {
	int a, b;
	int aa, bb;
	double c;
	double cc;
	
	cin >> a >> b >> c;
	cin >> aa >> bb >> cc;
	
	printf("VALOR A PAGAR: R$ %.2lf\n", double(b*c+bb*cc) );
}
