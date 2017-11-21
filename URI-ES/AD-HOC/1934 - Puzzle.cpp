// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Puzzle
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1934

#include <bits/stdc++.h>

using namespace std;

int l, c;
set<string> linha[110];
set<string> coluna[110];
string mat[110][110];
map<string, int> result;
int valL[110];
int valC[110];
	
int encontraL() {
	for(int i=0; i<l; i++) {
		if(linha[i].size() == 1)
			return i;
	}
	
	return -1;
}

int encontraC() {
	for(int i=0; i<c; i++) {
		if(coluna[i].size() == 1)
			return i;
	}
		
	return -1;
}

int calculaL(int i) {
	int soma = 0;
	int val;
	int cont = 0;
	for(int j=0; j<c; j++) {
		val = result[mat[i][j]];
		if(val != 1000000000)
			soma += val;
		else
			cont++;
	}
	
	return (valL[i]-soma)/cont;
}

int calculaC(int j) {
	int soma = 0;
	int val;
	int cont = 0;
	for(int i=0; i<l; i++) {
		val = result[mat[i][j]];
		if(val != 1000000000)
			soma += val;
		else
			cont++;
	}
	
	return (valC[j]-soma)/cont;
}

void remove(string s) {
	for(int i=0; i<l; i++)
		linha[i].erase(s);

	for(int i=0; i<c; i++)
		coluna[i].erase(s);
}

int main() {
	cin >> l >> c;
	
	for(int i=0; i<l; i++) {
		for(int j=0; j<c; j++) {
			cin >> mat[i][j];
			linha[i].insert(mat[i][j]);
			coluna[j].insert(mat[i][j]);
			result[mat[i][j]] = 1000000000;
		}
		cin >> valL[i];
	}
	
	for(int j=0; j<c; j++)
		cin >> valC[j];
	
	int pri = encontraL();
	
	if(pri != -1) {
		result[*linha[pri].begin()] = valL[pri]/c;
		remove(*linha[pri].begin());
	} else {
		pri = encontraC();
		result[*coluna[pri].begin()] = valC[pri]/l;
		remove(*coluna[pri].begin());
	}
	
	int tam = result.size();
	for(int i=1; i<tam; i++) {
		pri = encontraL();
		
		if(pri != -1) {
			result[*linha[pri].begin()] = calculaL(pri);
			remove(*linha[pri].begin());
		} else {
			pri = encontraC();
			result[*coluna[pri].begin()] = calculaC(pri);
			remove(*coluna[pri].begin());
		}
	}
	
	for(auto it : result)
		cout << it.first << " " << it.second << endl;

	return 0;
}

