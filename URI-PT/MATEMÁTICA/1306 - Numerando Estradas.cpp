// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Numerando Estradas
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1306

#include <cstdio>

int main() {
	int r, n, caso = 1;
	
	scanf("%d %d", &r, &n);
	
	while(r && n) {
		printf("Case %d: ", caso++);
		
		if(n+n*26 < r)
			printf("impossible\n");
		else if(r > n && (r-n)%n != 0)
			printf("%d\n", (r-n)/n + 1);
		else
			printf("%d\n", (r-n)/n);
		
		scanf("%d %d", &r, &n);
	}
	
	return 0;
}
