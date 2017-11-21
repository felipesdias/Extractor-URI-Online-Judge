// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Digitando no Telefone Cel...
// Nível: 6
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1284

#include <bits/stdc++.h>

using namespace std;

struct No {
	char c;
	map<char, No> filhos;
};

int dfs(No &atual, int nivel, char v) {
	int resp = 0;
	
	for(auto &it : atual.filhos) {
		if(it.first == '$')
			resp += nivel;
		
		resp += dfs(it.second, nivel + (atual.filhos.size() > 1), it.first);
	}
	
	return resp;
}

void imprime(No &atual, char v) {
	cout << v << ": ";

	for(auto it : atual.filhos)
		cout << it.first << " ";
	cout << endl;

	for(auto it : atual.filhos)
		imprime(it.second, it.first);
}

int main() {
	int n, i;
	string pal;
	
	// Lê n palavras e monta a arvore de todas as palavras, adicionando $ a cada fim de palavra
	while(cin >> n) {
		No inicio, *atual;
			
		// Começa com letra neutra, para iniciar de letra valida usar inicio = map<char, No>
		inicio.filhos['-'] = No();
			
		for(i = 0; i < n; i++)
		{
			atual = &inicio;
			
			cin >> pal;
			
			for(auto &it : pal) {
				if(atual->filhos.count(it))
					atual = &(atual->filhos[it]);
				else {
					atual->filhos[it] = No();
					atual = &(atual->filhos[it]);
				}
			}
			
			atual->filhos['$'] = No();
		}

		//imprime(inicio, '-');
		
		printf("%.2lf\n", dfs(inicio, 0, '-') * 1.0 / n);
	}
}
