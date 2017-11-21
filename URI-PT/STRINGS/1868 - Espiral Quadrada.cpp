// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Espiral Quadrada
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1868

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

int n;

bool desenha(int x, int y) {
	if (x < 0 || x >= n || y < 0 || y >= n)
		return true;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) {
				if(i != x || j != y)
					printf("O");
				else
					printf("X");
		}
		puts("");
	}
	puts("@");
	return false;
}

void chamaDesenho(int x, int y, int qt, int dir) {
	int i, j;
	if(dir == 0) {
		for(i=0; i<qt; i++)
			if(desenha(x, y+i))
				return;
		i--;
		for(j=1; j<=qt; j++)
			if(desenha(x-j, y+i))
				return;
		j--;
		chamaDesenho(x-j, y+i-1, qt+1, 1);
	} else {
		for(i=0; i<qt; i++)
			if(desenha(x, y-i))
				return;
		i--;
		for(j=1; j<=qt; j++)
			if(desenha(x+j, y-i))
				return;
		j--;
		chamaDesenho(x+j, y-i+1, qt+1, 0);
	}
}

int main() {
	
	scanf("%d", &n);
	
	while(n) {

		desenha(n/2, n/2);
		chamaDesenho(n/2, (n/2)+1, 1, 0);
		
		scanf("%d", &n);
	}
}
