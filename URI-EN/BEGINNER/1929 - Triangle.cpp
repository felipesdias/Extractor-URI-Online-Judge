// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Triangle
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1929

#include <stdio.h>
#include <algorithm>

int main() {
	int e[4];
	
	scanf("%d %d %d %d", &e[0], &e[1], &e[2], &e[3]);
	
	std::sort(e, e+4);
	
	printf("%c\n", e[0] + e[1] > e[2] || e[1] + e[2] > e[3] ? 'S' : 'N');
}
