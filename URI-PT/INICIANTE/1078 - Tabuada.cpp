// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Tabuada
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1078

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a;
	cin >> a;
	
	for(int i=1; i<=10; i++)
		printf("%d x %d = %d\n",i,a,i*a);
		
	return 0;
}
