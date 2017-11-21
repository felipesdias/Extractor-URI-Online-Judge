// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Vai Ter Copa?
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1564

#include <cstdio>

int main () {
	int n;
	
	while(scanf("%d", &n) != EOF) 
		printf("%s\n", n ? "vai ter duas!" : "vai ter copa!");
	
	return 0;
}

