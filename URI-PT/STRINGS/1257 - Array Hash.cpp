// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Array Hash
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1257

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
	int n, m;
	int soma;
	
	string s;
	
	cin >> n;
	
	while(n--) {
		scanf("%d", &m);
		soma = 0;
		for(int i=0; i<m; i++) {
			cin >> s;
			for(int j=0; j<s.length(); j++) {
				soma += s[j]-'A' + i + j;
			}
		}
		printf("%d\n", soma);
	}
}
