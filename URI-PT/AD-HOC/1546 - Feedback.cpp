// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Feedback
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1546

#include <cstdio>

int main () {
	int n, m, e;
	
	scanf("%d", &n);
	
	while(n > 0) {
		scanf("%d", &m);
		
		while(m > 0) {
			scanf("%d", &e);
			printf("%s\n", e == 1 ? "Rolien" : e == 2 ? "Naej" : e == 3 ? "Elehcim" : "Odranoel");
			m--;
		}
		
		n--;
	}
}

