// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: One-Two-Three
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1332

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <climits>

using namespace std;

struct tNome {
	string nome;
	
	bool operator < (tNome a) const {
		int que;
		if(this->nome.length() <= a.nome.length())
			que = this->nome.length();
		else
			que = a.nome.length();

		for(int i=0; i<que; i++) {
			if(toupper(this->nome[i]) < toupper(a.nome[i]))
				return true;
			if(toupper(this->nome[i]) > toupper(a.nome[i]))
				return false;
		}
		
		if(this->nome.length() <= a.nome.length())
			return true;
		else
			return false;
	}
};

int main() {
	int n, cont;
	string s;
	
	cin >> n;
	
	while(n--) {
		cont = 0;
		cin >> s;
		if(s.length() == 5)
			puts("3");
		else {
			if(s[0] == 'o')
				cont++;
			if(s[1] == 'n')
				cont++;
			if(s[2] == 'e')
				cont++;
			
			if(cont >= 2)
				puts("1");
			else
				puts("2");
		}
	}

	return 0;
}
