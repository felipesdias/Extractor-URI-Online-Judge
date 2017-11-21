// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Secuencia IJ 1
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1095

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	int i,j;
	
	for(i=1, j=60; j>=0; j-=5, i+=3)
		printf("I=%d J=%d\n", i,j);
	
	return 0;
}
