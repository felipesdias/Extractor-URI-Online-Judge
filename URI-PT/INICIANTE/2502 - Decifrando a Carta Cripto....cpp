// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Decifrando a Carta Cripto...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2502

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;

	string s1, s2, s3;
	char mapa[256];

	while(cin >> n >> m) {
		for(int i=0; i<=255; i++)
			mapa[i] = char(i);

		getchar();
		getline(cin, s1);
		getline(cin, s2);

		for(int i=0; i<s1.size(); i++) {
			mapa[char(toupper(s2[i]))] = char(toupper(s1[i]));
			mapa[char(tolower(s2[i]))] = char(tolower(s1[i]));

			mapa[char(toupper(s1[i]))] = char(toupper(s2[i]));
			mapa[char(tolower(s1[i]))] = char(tolower(s2[i]));
		}


		for(int i=0; i<m; i++) {
			getline(cin, s3);

			for(auto &it : s3) {
				cout << mapa[it];
			}
			cout << endl;
		}
		cout << endl;
	}
	
	return 0;
}
