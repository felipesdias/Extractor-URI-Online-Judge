// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Números Ímpares
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1067

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int x;
	cin >> x;
	
	for(int i=1; i<=x; i+=2)
		printf("%d\n", i);
}
