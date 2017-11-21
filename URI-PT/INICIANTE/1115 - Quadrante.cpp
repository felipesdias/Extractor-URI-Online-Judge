// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Quadrante
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1115

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;

int main() {
	int x, y;
	
	scanf("%d%d", &x, &y);
	while(x != 0 && x != 0) {
		if(y > 0)
			if(x>0)
				puts("primeiro");
			else
				puts("segundo");
		else
			if(x>0)
				puts("quarto");
			else
				puts("terceiro");
		
		scanf("%d%d", &x, &y);
	}

}

