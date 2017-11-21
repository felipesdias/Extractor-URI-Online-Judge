// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Salary
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1008

#include <stdio.h>
 
int main() {
	int a, b;
	double c;

	scanf("%d%d%lf",&a,&b,&c);
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n",a,(double)b*c);
 
    return 0;
}
