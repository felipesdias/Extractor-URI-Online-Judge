// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Sum of Consecutive Even N...
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1159

#include <bits/stdc++.h>

using namespace std;


int main() {
	
	int n;
	
	while(scanf("%d", &n) && n) {
		if(n%2 != 0)
			n++;
		
		printf("%d\n", (n+n+2+n+4+n+6+n+8));
	}
	

	return 0;
}
