// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Letras
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2457

#include <bits/stdc++.h>

using namespace std;

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
  char c;

  cin >> c;
  scanf(" ");
  getline(cin, s);

  auto novo = sSplit(s, " ");

  int cont = 0;
  for(auto it : novo)
    if(it.find(c) != string::npos)
      cont++;

    printf("%.1f\n", (100.0*cont)*1.0 / novo.size());
}
