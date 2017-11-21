// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Futebol
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1495

#include <bits/stdc++.h>
using namespace std;

struct Jogo {
	int gp, gn;
	
	bool operator<(const Jogo& a) const {
		return gn - gp < a.gn - a.gp;
	}
};

int main() {
	int n, g, dif, cont;
	Jogo aux;
	vector<Jogo> jogos;
	
	while(scanf("%d %d", &n, &g) > 0) {
		cont = 0;
		jogos.clear();
		
		for(int i=0; i<n; i++) {
			scanf("%d %d", &aux.gp, &aux.gn);
			if(aux.gp == aux.gn)
				cont++;
			else if(aux.gp > aux.gn) {
				cont += 3;
				continue;
			}
			
			jogos.push_back(aux);
		}
		
		sort(jogos.begin(), jogos.end());
		
		for(int i=0; i<jogos.size(); i++) {
			if(g == 0)
				break;
			
			dif = jogos[i].gn - jogos[i].gp;
			
			if(dif + 1 <= g) {
				if(dif == 0)
					cont += 2;
				else
					cont += 3;
					
				g -= dif + 1;
			}
			else if(dif <= g) {
				cont++;
				g -= dif;
			}
			else
				break;
		}
		
		printf("%d\n", cont);
	}
}

