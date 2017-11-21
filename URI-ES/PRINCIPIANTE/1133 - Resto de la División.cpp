// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Resto de la División
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1133

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
	for(int i=vet[0]+1; i<vet[1]; i++)
		if(i%5 == 2 || i%5 == 3)
			cout << i << endl;
	return 0;
}
