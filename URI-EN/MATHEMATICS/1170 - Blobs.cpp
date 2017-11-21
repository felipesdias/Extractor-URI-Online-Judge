// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Blobs
// Level: 1
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1170

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
