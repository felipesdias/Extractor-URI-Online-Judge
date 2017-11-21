// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Experiências
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1094

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	int n, aux;
	char c;
	double vet[256] = {0};
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> aux >> c;
		vet[c] += aux;
	}
	
	printf("Total: %.0lf cobaias\n", vet['C']+vet['R']+vet['S']);
	printf("Total de coelhos: %.0lf\n", vet['C']);
	printf("Total de ratos: %.0lf\n", vet['R']);
	printf("Total de sapos: %.0lf\n", vet['S']);
	printf("Percentual de coelhos: %.2lf %%\n", (vet['C']*100)/(vet['C']+vet['R']+vet['S']));
	printf("Percentual de ratos: %.2lf %%\n", (vet['R']*100)/(vet['C']+vet['R']+vet['S']));
	printf("Percentual de sapos: %.2lf %%\n", (vet['S']*100)/(vet['C']+vet['R']+vet['S']));

	return 0;
}
