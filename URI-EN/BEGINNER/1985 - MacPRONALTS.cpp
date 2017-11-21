// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: MacPRONALTS
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1985

#include <stdio.h>

int main() {
	int n, e, q;
	double v = 0;
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%d %d", &e, &q);
		
		e -= 1000;
		
		v += (e+0.5)*q;
	}
	
	printf("%0.2lf\n", v);
}
