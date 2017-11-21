// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Billetes
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1018

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

 
int main() {
	int a;
	int vet[7] = {100,50,20,10,5,2,1};
	cin >> a;
	cout << a << endl;
	
	for(int i=0; i<7; i++) {
		printf("%d nota(s) de R$ %d,00\n", a/vet[i], vet[i]);
		a -= (a/vet[i])*vet[i];
	}
}
