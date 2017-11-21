// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Blobs
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1170

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main() {
	int n;
	double comida;
	int dias;

	cin >> n;

	while(n--) {
		dias = 0;
		cin >> comida;

		while(comida > 1.0) {
			dias++;
			comida /= 2;
		}

		cout << dias << " dias" << endl;
	}

	return 0;
}
