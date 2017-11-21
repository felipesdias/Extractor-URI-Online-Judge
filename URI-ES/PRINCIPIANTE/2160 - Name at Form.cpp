// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Name at Form
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2160

#include <bits/stdc++.h>
using namespace std;

int main() {
	string line;
	getline(cin, line);
	cout << (line.size() <= 80 ? "YES" : "NO") << endl;
}
