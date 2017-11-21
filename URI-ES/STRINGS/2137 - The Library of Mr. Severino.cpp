// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: The Library of Mr. Severino
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2137

#include <bits/stdc++.h>

using namespace std;


int main() {

	int n;
	string aux;

	while(cin >> n) {
		priority_queue<string, vector<string>, std::greater<string> > lista;
		while(n--)
			cin >> aux, lista.push(aux);
		while(!lista.empty())
			cout << lista.top() << endl, lista.pop();
	}
}
