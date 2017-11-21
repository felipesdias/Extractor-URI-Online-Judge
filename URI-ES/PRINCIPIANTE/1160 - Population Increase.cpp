// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Population Increase
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1160

#include <bits/stdc++.h>

using namespace std;


int main() {
	
	int a, b, n;
	double ca, cb;
	int aux1, aux2;
	int i;

	scanf("%d", &n);

	while(n--) {
		scanf("%d%d%lf%lf", &a, &b, &ca, &cb);
		
		for(i=0; i<=100; i++) {
			if(a > b)
				break;
			
			a += int(a*ca/100);
			b += int(b*cb/100);
		}
		
		if(i > 100)
			puts("Mais de 1 seculo.");
		else
			printf("%d anos.\n", i);
	}
	

	return 0;
}

