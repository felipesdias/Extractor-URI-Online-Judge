// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: The Motion Picture
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1963

#include <stdio.h>

int main() {
	double a, b;
	
	scanf("%lf %lf", &a, &b);
	
	printf("%.02lf%%\n", 100.0*(b-a)/a);
}
