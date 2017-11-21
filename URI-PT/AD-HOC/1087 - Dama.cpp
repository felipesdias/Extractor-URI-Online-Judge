// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Dama
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1087

#include <cstdio>

int main () {
	int x1, y1, x2, y2;
	
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	
	while(x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0) {
		if(x1 == x2 && y1 == y2)
			puts("0");
		else if(x1 - x2 == y1 - y2 || (x1 - x2)*-1 == y1 - y2 || x1 == x2 || y1 == y2)
			puts("1");
		else
			puts("2");
			
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	}
	
	return 0;
}

