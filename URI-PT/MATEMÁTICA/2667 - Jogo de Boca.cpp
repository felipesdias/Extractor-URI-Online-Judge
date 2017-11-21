// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Jogo de Boca
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2667

#include <bits/stdc++.h>

using namespace std;

int main() {
	char c;
	int n, total = 0;

	while(cin >> c) {
		sscanf(&c, "%d", &n);
		total += n;
	}

	printf("%d\n", total%3);
}
