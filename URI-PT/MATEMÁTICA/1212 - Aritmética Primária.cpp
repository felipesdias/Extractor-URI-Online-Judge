// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Aritmética Primária
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1212

#include <cstdio>
#include <cstring>

int main() {
	int n, i;
	char num1[50], num2[50];
	
	while(scanf(" %s %s", num1, num2) > 0 && (strcmp(num1, "0") || strcmp(num2, "0"))) {
		for(i = 0; i < strlen(num1)/2; i++) {
			n = num1[i];
			num1[i] = num1[strlen(num1)-i-1];
			num1[strlen(num1)-i-1] = n;
		}
		
		for(i = strlen(num1); i < 50; i++)
			num1[i] = '0';
		
		for(i = 0; i < strlen(num2)/2; i++) {
			n = num2[i];
			num2[i] = num2[strlen(num2)-i-1];
			num2[strlen(num2)-i-1] = n;
		}
		
		for(i = strlen(num2); i < 50; i++)
			num2[i] = '0';
		
		n = 0;
		
		for(i = 0; i < 50; i++) {
			if(num1[i]+num2[i]-'0'-'0' > 9) {
				n++;
				
				num1[i+1]++;
			}
		}
		
		if(n)
			printf("%d carry operation%s.\n", n, n > 1 ? "s" : "");
		else
			puts("No carry operation.");
	}
	
	return 0;
}
