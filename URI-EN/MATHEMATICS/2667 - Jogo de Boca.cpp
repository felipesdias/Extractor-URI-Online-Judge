// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Jogo de Boca
// Level: 3
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2667

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
