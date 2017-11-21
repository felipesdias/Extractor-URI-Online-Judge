// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Walking in Time
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2235

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

