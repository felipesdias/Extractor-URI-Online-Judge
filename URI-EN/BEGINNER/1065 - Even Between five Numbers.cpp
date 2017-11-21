// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Even Between five Numbers
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1065

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a;
	int soma = 0;
	int cont = 0;
	for(int i=0; i<5; i++) {
		cin >> a;
		if(a%2 == 0) {
			cont++;
		}
	}
	cout << cont << " valores pares\n";

}
