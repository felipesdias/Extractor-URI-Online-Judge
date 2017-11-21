// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Secuencia IJ 4
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1098

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	double aux, i,j = 1;
	
	for(i=0, j=1; i<=2; i+=0.2, j+=0.2) {
		cout << "I=" << i << " J=" << j << endl;
		cout << "I=" << i << " J=" << j+1 << endl;
		cout << "I=" << i << " J=" << j+2 << endl;
	}
	
	return 0;
}
