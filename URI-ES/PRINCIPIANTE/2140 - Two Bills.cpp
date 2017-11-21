// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Two Bills
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2140

#include <cstdio>

int main() {
	int n, m;
	
	scanf("%d %d", &n, &m);
	
	while(m || n) {
		m -= n;
		
		if(m - 100 == 2 || m - 100 == 5 || m - 100 == 10 || m - 100 == 20 || m - 100 == 50 || m - 50 == 2 || m - 50 == 5 || m - 50 == 10 || m - 50 == 20 ||
		   m - 20 == 2 || m - 20 == 5 || m - 20 == 10 || m - 10 == 2 || m - 10 == 5 || m - 5 == 2)
			printf("possible\n");
		else
			printf("impossible\n");
		
		scanf("%d %d", &n, &m);
	}

	return 0;
}
