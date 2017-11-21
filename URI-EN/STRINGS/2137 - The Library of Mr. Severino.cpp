// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: The Library of Mr. Severino
// Level: 1
// Category: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2137

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
