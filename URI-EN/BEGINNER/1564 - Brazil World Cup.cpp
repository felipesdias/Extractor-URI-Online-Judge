// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Brazil World Cup
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1564

#include <cstdio>

int main () {
	int n;
	
	while(scanf("%d", &n) != EOF) 
		printf("%s\n", n ? "vai ter duas!" : "vai ter copa!");
	
	return 0;
}

