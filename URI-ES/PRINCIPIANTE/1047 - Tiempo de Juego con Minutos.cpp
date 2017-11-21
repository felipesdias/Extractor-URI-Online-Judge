// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Tiempo de Juego con Minutos
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1047

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a, b, c, d;
	int min;
	
	cin >> a >> b >> c >> d;
	
	if(a == b && b == c && c == d)
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
	else {
		if(a >= c)
			c += 24;
		min = (60*c+d) - (60*a+b);
		
		cout << "O JOGO DUROU " << (int)min/60 << " HORA(S) ";
		
		min -= (min/60)*60;
		
		cout << "E " << min << " MINUTO(S)\n";
	}
	
	
	return 0;
}
