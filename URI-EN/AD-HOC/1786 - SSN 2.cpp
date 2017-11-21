// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: SSN 2
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1786

#include <cstdio>

int main() {
	char cpf[10], dig1, dig2;
	int a, b;
	
	while(scanf("%s", &cpf)!=EOF) {
		a = b = 0;
		
		for(int i=0; i<9; i++) {
			a += (cpf[i]-'0')*(i+1);
			b += (cpf[i]-'0')*(9-i);
		}
		
		if(a%11 == 10)
			dig1 = '0';
		else
			dig1 = a%11 + '0';
		
		if(b%11 == 10)
			dig2 = '0';
		else
			dig2 = b%11 + '0';
		
		for(int i=0; i<9; i++) {
			printf("%c", cpf[i]);
			if(i==2 || i==5)
				printf(".");
		}
		
		printf("-%c%c\n", dig1, dig2);
	}
	
	return 0;
}
