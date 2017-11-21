// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Delaunay Triangulation
// Level: 1
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1620

#include <stdio.h>

int main () {
	double a;
	
	while(scanf("%lf", &a) && a > 0) 
		printf("%.6lf\n", (a-3)/a);
	
	return 0;
} 
