// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Tempo de Jogo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1046

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a, b;
	
	cin >> a >> b;
	
	if(a >= b)
		b += 24;
	
	cout << "O JOGO DUROU " << b-a << " HORA(S)\n";
	
	
	return 0;
}
