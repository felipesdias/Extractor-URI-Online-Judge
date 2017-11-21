// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Fit or Dont Fit I
// Level: 1
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1240

#include <stdio.h>
#include <string.h>

int main () {
	int n;
	char a[20], b[20];
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%s %s", a, b);
		
		printf("%s\n", !strcmp(a+strlen(a)-strlen(b), b) ? "encaixa" : "nao encaixa");
	}
	
	return 0;
}
