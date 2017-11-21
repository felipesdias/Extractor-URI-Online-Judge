// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Resto 2
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1075

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a;
	cin >> a;
	
	for(int i=2; i<10000; i++)
		if(i%a == 2)
			printf("%d\n",i);
		
	return 0;
}
