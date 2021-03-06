// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Jumping Frog
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1961

#include <stdio.h>

int main() {
	int h, n, e, l;
	
	scanf("%d %d %d", &h, &n, &l);
	
	n--;
	
	while(n--) {
		scanf("%d", &e);
		
		if(e-l > h || l-e > h) {
			puts("GAME OVER");
			return 0;
		}
		
		l = e;
	}
	
	puts("YOU WIN");
}
