// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Soma de Impares Consecuti...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1071

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int vet[2];
	int soma = 0;
	cin >> vet[0] >> vet[1];
	
	sort(vet, vet+2);

	for(int i=vet[0]+1; i<vet[1]; i++)
		if(i%2)
			soma += i;
		
	cout << soma << endl;

}
