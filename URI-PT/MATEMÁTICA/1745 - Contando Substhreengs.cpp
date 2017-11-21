// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Contando Substhreengs
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1745

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string entrada;
	
	long long resp = 0;
	
	cin >> entrada;
	
	int pd[3][2] = {0}, atual = 0;
	
	for(auto &it : entrada) {
		if(it >= '0' && it <= '9') {
			int val = it - '0';
			
			for(int i = 0; i < 3; i++)
				pd[(i + val) % 3][!atual] = pd[i][atual];
				
			pd[val % 3][!atual]++;
			
			atual = !atual;
			
			resp += pd[0][atual];
		}
		else {
			fill(pd[0], pd[0] + 3 * 2, 0);
		}
	}
	
	cout << resp << endl;
}

