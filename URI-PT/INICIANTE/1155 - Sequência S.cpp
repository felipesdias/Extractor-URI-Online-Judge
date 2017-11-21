// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Sequência S
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1155

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

	double soma = 0;
	
	for(int i=1; i<=100;i++)
		soma += 1.0/i;
	
	printf("%.2lf\n", soma);
	
	return 0;
}
