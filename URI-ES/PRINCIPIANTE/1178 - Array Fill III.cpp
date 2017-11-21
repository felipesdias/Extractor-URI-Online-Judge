// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Array Fill III
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1178

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	double n;
	
	cin >> n;
	
	for(int i=0; i<100; i++) {
		printf("N[%d] = %.4lf\n", i, n);
		n /= 2;
	}
}
