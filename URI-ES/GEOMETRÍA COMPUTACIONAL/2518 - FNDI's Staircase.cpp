// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: FNDI's Staircase
// Nível: %d
// Categoria: GEOMETRÍA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2518

#include <bits/stdc++.h>

using namespace std;

int main() {
	double n, h, c, l;
	double base, altura, hipo;
	while(cin >> n) {
		cin >> h >> c >> l;
		h /= 100;
		c /= 100;
		l /= 100;
		base = c*n;
		altura = h*n;
		hipo = sqrt(base*base + altura*altura);
		printf("%.4lf\n", l*hipo);
	}
	
	return 0;
}
