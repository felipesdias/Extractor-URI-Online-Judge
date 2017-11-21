// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Turn Left!
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1437

#include <cstdio>

int main () {
	int n, i, pontoCard;
	char comando;

	scanf("%d", &n);

	while(n != 0) {
		pontoCard = 0;
		scanf("%*c");

		for(i = 0; i < n; i++) {
			scanf("%c", &comando);
			if(comando == 'D')
				pontoCard++;
			else
				pontoCard += 3;
		}

		pontoCard %= 4;

		printf("%c\n", pontoCard == 0 ? 'N' : pontoCard == 1 ? 'L' : pontoCard == 2 ? 'S' : 'O');

		scanf("%d", &n);
	}

	return 0;
}

