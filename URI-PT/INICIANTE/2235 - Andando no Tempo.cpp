// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Andando no Tempo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2235

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c;
	
	cin >> a >> b >> c;
	
	char s='N';
	
	if(a==b || a==c || b==c)
		s='S';
		
	if(a+b-c == 0 || a+c-b == 0 || b+c-a == 0)
		s='S';
		
	printf("%c\n", s);

	return 0;
}

