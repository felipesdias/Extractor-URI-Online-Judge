// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: S Sequence II
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1156

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

	double soma = 1;
	
	for(int i=3, j=2; i<=39; i+=2, j*=2)
		soma += (double)i/(double)j;
	
	printf("%.2lf\n", soma);
	
	return 0;
}
