// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Van
// Level: 5
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2693

#include <bits/stdc++.h>
using namespace std;

struct Aluno {
	string nome;
	int dist;
	char regiao;
	
	bool operator<(const Aluno &a) const {
		if(dist == a.dist)
			return regiao < a.regiao;
			
		return dist < a.dist;
	}
};

int main() {
	int n;
	Aluno aux;
	
	while(cin >> n) {
		vector<Aluno> alunos;
		
		for(int i = 0; i < n; i++) {
			cin >> aux.nome >> aux.regiao >> aux.dist;
			alunos.push_back(aux);
		}
		
		sort(alunos.begin(), alunos.end());
		
		for(Aluno &it : alunos) {
			cout << it.nome << endl;
		}
	}
}

