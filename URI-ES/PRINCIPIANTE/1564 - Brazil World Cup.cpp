// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Brazil World Cup
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1564

#include <cstdio>

int main () {
	int n;
	
	while(scanf("%d", &n) != EOF) 
		printf("%s\n", n ? "vai ter duas!" : "vai ter copa!");
	
	return 0;
}

