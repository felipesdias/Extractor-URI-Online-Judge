// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: A Última Criança Boa
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2023

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
	string a, b;
	tNome aux, aux2;

	priority_queue<tNome> nomes;
	
	while(getline(cin, aux.nome))
		nomes.push(aux);
	
	cout << (nomes.top()).nome << endl;
}

