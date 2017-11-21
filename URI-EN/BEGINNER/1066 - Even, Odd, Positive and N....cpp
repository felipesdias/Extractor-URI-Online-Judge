// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Even, Odd, Positive and N...
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1066

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
	int cont2 = 0;
	int cont3 = 0;
	for(int i=0; i<5; i++) {
		cin >> a;
		if(a%2 == 0)
			cont++;
		if(a < 0)
			cont2++;
		if(a > 0)
			cont3++;
	}
	cout << cont << " valor(es) par(es)\n";
	cout << 5-cont << " valor(es) impar(es)\n";
	cout << cont3 << " valor(es) positivo(s)\n";
	cout << cont2 << " valor(es) negativo(s)\n";

}
