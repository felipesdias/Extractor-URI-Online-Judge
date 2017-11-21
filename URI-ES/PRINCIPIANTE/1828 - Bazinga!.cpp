// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Bazinga!
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1828

#include <cstdio>

int parse(char str[]) {
	if(str[0] == 't')
		return 0;
	
	if(str[0] == 'p') {
		if(str[1] == 'a')
			return 1;
		else
			return 2;
	}
	
	if(str[0] == 'l')
		return 3;
	
	if(str[0] == 'S')
		return 4;
	
	return -1;
}


int ganhador(int a, int b) {
	if(a == b)
		return 0;
	
	if(a == 0) 
		if(b == 1 || b == 3)
			return -1;
	
	if(a == 1) 
		if(b == 2 || b == 4)
			return -1;

	if(a == 2) 
		if(b == 3 || b == 0)
			return -1;
	
	if(a == 3)
		if(b == 4 || b == 1)
			return -1;
		
	if(a == 4)
		if(b == 2 || b == 0)
			return -1;
	
	return 1;
}

int main() {
	int n;
	char str1[50], str2[50], a, b;
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		scanf(" %s %s", str1, str2);
		
		a = parse(str1);
		b = parse(str2);
		
		printf("Caso #%d: %s!\n", i, ganhador(a, b) > 0 ? "Raj trapaceou" : ganhador(a, b) == 0 ? "De novo" : "Bazinga");
	}
	
	return 0;
}
