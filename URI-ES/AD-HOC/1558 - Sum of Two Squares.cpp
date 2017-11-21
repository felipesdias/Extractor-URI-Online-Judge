// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Sum of Two Squares
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1558

#include <cstdio>

bool ehSomaQuad(int n) {
	int i, j;

	for(i = 0; i <= 100; i++)
		for(j = 0; j <= 100; j++)
			if(i*i + j*j == n)
				return true;
	return false;
}

int main () {
	int n;
	
	while(scanf("%d", &n) != EOF) 
		printf("%s\n", ehSomaQuad(n) ? "YES" : "NO");
	
	return 0;
}

