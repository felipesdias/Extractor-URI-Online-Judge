// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Intervalo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1037

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	double a;
	
	cin >> a;
	
	
	if(a >= 0 && a <= 100) {
		if(a<=25)
			cout << "Intervalo [0,25]\n";
		else if(a<=50)
			cout << "Intervalo (25,50]\n";
		else if(a<=75)
			cout << "Intervalo (50,75]\n";
		else
			cout << "Intervalo (75,100]\n";
	} else
		cout << "Fora de intervalo\n";
	
	return 0;
}
