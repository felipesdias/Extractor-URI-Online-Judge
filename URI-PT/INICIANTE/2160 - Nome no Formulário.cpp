// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Nome no Formulário
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2160

#include <bits/stdc++.h>
using namespace std;

int main() {
	string line;
	getline(cin, line);
	cout << (line.size() <= 80 ? "YES" : "NO") << endl;
}
