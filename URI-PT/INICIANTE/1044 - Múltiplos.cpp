// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Múltiplos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1044

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int vet[2];
	
	cin >> vet[0] >> vet[1];
	sort(vet, vet+2);
	
	if(vet[1]%vet[0] == 0)
		puts("Sao Multiplos");
	else
		puts("Nao sao Multiplos");
	
	return 0;
}
