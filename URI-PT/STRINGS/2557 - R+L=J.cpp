// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: R+L=J
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2557

#include <bits/stdc++.h>

using namespace std;

int num(string a) {
	int result;
	
	sscanf(a.c_str(), "%d", &result);
	
	return result;
}

vector<string> sSplit(string s, string div) {
	vector<string> parseado;
	
	string aux = "";
	string aux2 = "";
	int i, j;
	for(i=0, j=0; i<s.length(); ++i) {
		if(s[i] != div[j]) {
			aux += s[i];
		} else {
			aux2 = "";
			for(; j<div.length() && i<s.length() && s[i] == div[j]; ++i, ++j)
				aux2 += s[i];
			
			if(j==div.length()) {
				parseado.push_back(aux);
				aux = "";
			} else {
				aux += aux2;
			}
			
			--i;
			j=0;
		}
	}
	
	parseado.push_back(aux);
		
	return parseado;
}

int main() {
	string s;
	
	while(cin >> s) {
		string a = sSplit(s, "+")[0];
		string b = sSplit(sSplit(s, "+")[1], "=")[0];
		string c = sSplit(sSplit(s, "+")[1], "=")[1];
		
		if(a[0]-'0' < 0 || a[0]-'0' > 9)
			cout << num(c) - num(b) << endl;
		else if(b[0]-'0' < 0 || b[0]-'0' > 9)
			cout << num(c) - num(a) << endl;
		else
			cout << num(a) + num(b) << endl;
	}
	
	return 0;
}

