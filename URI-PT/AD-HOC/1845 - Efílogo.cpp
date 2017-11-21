// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Efílogo
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1845

#include <cstdio>

int main() {
	int marcado = 0;
	char a;
	
	while(scanf("%c", &a) > 0) {
		if(a == 'p' || a == 's' || a == 'v' || a == 'j' || a == 'b' || a == 'z' || a == 'x' || a == 'f') {
			if(marcado)
				continue;
			a = 'f';
			
			marcado = 1;
		}
		else if(a == 'P' || a == 'S' || a == 'V' || a == 'J' || a == 'B' || a == 'Z' || a == 'X' || a == 'F') {
			if(marcado)
				continue;
			a = 'F';
			
			marcado = 1;
		}
		else
			marcado = 0;
		
		printf("%c", a);
	}
	
	return 0;
}
