// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Sort! Sort!! e Sort!!!
// Nível: 4
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1252

#include <stdio.h>
#include <algorithm>

using namespace std;

int m;

int abs(int a) {
	return a > 0 ? a : -a;
}

bool cmp(int a, int b) {
    if(a % m < b % m)
        return 1;
    else if(a % m == b % m) {
        if(a % 2 && !(b % 2))
            return 1;
		else if(!(a % 2) && b % 2)
			return 0;
        else if(a % 2)
            return a > b;
		return b > a;
    }
    return 0;
}

int main () {
	int n, valores[100000];
	
	while(scanf("%d %d", &n, &m)) {
		printf("%d %d\n", n, m);
		
		if(n == m && n == 0)
			break;
		
		for(int i = 0; i < n; i++)
			scanf("%d", &valores[i]);
		
		sort(valores, valores+n, cmp);
		
		for(int i = 0; i < n; i++)
			printf("%d\n", valores[i]);
	}
	
	return 0;
}
