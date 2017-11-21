// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Notas e Moedas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1021

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

 
int main() {
	double a;
	int notas[6] = {100,50,20,10,5,2};
	int moedas[6] = {100,50,25,10,5,1};
	
	cin >> a;
	
	cout << "NOTAS:\n";
	for(int i=0; i<6; i++) {
		printf("%d nota(s) de R$ %d.00\n", (int)a/notas[i], notas[i]);
		a -= (int)a/notas[i] * notas[i];
	}
	a *= 100;
	cout << "MOEDAS:\n";
	for(int i=0; i<6; i++) {
		printf("%d moeda(s) de R$ %.2lf\n", (int)a/moedas[i], moedas[i]/100.0);
		a -= (int)a/moedas[i] * moedas[i];
	}
}
