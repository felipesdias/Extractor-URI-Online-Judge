// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Ho Ho Ho
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1759

#include <stdio.h>

int main() {
	int n;
	
	scanf("%d", &n);
	
	while(n--) 
		printf("%s%s", "Ho", n != 0 ? " " : "!\n");
	
	return 0;
}
