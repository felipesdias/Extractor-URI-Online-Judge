// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Mjölnir
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1865

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;

	cin >> n;
	string s;
	int aux;


	while(n--) {
		cin >> s >> aux;
		if(s == "Thor")
			puts("Y");
		else
			puts("N");
	}

	return 0;
}
