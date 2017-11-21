// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Short Story Competition
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1222

#include <string>
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


int main() {
	int n, l, c;
	int linhas, paginas, coluna;
	string s;
	bool primeira;
	
	while(cin >> n) {
		cin >> l >> c;
		linhas = l;
		coluna = 0;
		primeira = true;
		
		while(n--) {
			cin >> s;
//cout << coluna << endl;	
			if(primeira) {
				if(s.length() > c) {
					linhas++;
					primeira = true;
				} else {
					coluna += s.length()+1;
					primeira = false;
				}
			} else {
				if(coluna + s.length() > c) {
					linhas++;
					coluna = s.length()+1;
					primeira = false;
				} else
					coluna += s.length()+1;
			}
		}
		cout << (linhas/l) << endl;
	}
	
	return 0;
}
