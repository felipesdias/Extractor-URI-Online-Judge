// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: D como em Daedalus
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2016

#include <bits/stdc++.h>

using namespace std;

#define D(x) cout << #x " = " << x << endl;

int main() {
	int n, m, pontosDead, entrada, i, j;
	vector<int> valoresDead, somas, budgets;
	
	cin >> n >> m;
	
	valoresDead = vector<int>(m);
	budgets = vector<int>(m);
	somas = vector<int>(m, 0);
	
	pontosDead = 0;
	
	for(i = 0; i < m; i++) {
		cin >> budgets[i];
		
		cin >> valoresDead[i];
		
		for(j = 1; j < n; j++) {
			cin >> entrada;
			
			somas[i] += entrada;
		}
		
		valoresDead[i] = somas[i] + valoresDead[i] <= budgets[i] ? valoresDead[i] : 0;
		
		if(somas[i] + 10000 <= budgets[i])
			pontosDead += 10000 - valoresDead[i];
		else if(somas[i] + 1000 <= budgets[i])
			pontosDead += 1000 - valoresDead[i];
		else if(somas[i] + 100 <= budgets[i])
			pontosDead += 100 - valoresDead[i];
		else if(somas[i] + 10 <= budgets[i])
			pontosDead += 10 - valoresDead[i];
		else if(somas[i] + 1 <= budgets[i])
			pontosDead += 1 - valoresDead[i];
	}
	
	cout << pontosDead << endl;
}

