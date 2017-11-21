// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Múltiplos de 13
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1132

#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <climits>

using namespace std;


int main() {

	int vet[2];
	long long int soma = 0;
	cin >> vet[0] >> vet[1];
	sort(vet, vet+2);
	for(int i=vet[0]; i<=vet[1]; i++) {
		if(i%13 != 0)
			soma += i;
	}
	cout << soma << endl;
	return 0;
}
