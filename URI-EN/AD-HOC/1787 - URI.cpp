// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: URI
// Level: 1
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1787

#include <stdio.h>

bool div2(int a) {
	int i = 2;
	
	if(a == 0 || a == 1)
		return 0;
	
	while(i <= a) {
		if(i == a)
			return 1;
		
		i *= 2;
	}
	
	return 0;
}

int main () {
	int n, a, b, c, pa, pb, pc;
	
	while(scanf("%d", &n) > 0 && n) {
		pa = pb = pc = 0;
		
		while(n--) {
			scanf("%d %d %d", &a, &b, &c);
			
			if(a && div2(a)) {
				if(a >= b && a >= c)
					pa++;
				pa++;
			}
			if(b && div2(b)) {
				if(b >= a && b >= c)
					pb++;
				pb++;
			}
			if(c && div2(c)) {
				if(c >= a && c >= b)
					pc++;
				pc++;
			}
		}

		if(pa > pb && pa > pc)
			puts("Uilton");
		else if(pb > pa && pb > pc)
			puts("Rita");
		else if(pc > pa && pc > pb)
			puts("Ingred");
		else
			puts("URI");
	}
	
	return 0;
}
