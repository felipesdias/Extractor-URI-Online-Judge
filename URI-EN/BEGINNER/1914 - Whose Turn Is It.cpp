// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Whose Turn Is It?
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1914

#include <cstdio>

int main() {
	int n, a, b;
	char j1[50], e1[50], j2[50];
	
	scanf("%d", &n);

	while(n--) {
		scanf(" %s %s %s %*s %d %d", j1, e1, j2, &a, &b);
		
		if(e1[0] == 'P') {
			if((a+b) % 2 == 0)
				puts(j1);
			else
				puts(j2);
		}
		else {
			if((a+b) % 2 == 1)
				puts(j1);
			else
				puts(j2);
		}
	}
	
	return 0;
}
