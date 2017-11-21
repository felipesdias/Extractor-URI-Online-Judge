// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Bingo!
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1136

#include <bits/stdc++.h>

using namespace std;

#define D(x) //cout << #x << " = " << x << endl

#define PB push_back

int main() {
	int n, a, e;
	
	while(cin >> n >> a && n) {
		set<int> numeros, gerados;
		
		while(a--)
			cin >> e, numeros.insert(e), gerados.insert(e);
			
		for(auto &it : numeros)
			for(auto &it2 : numeros)
				if(it != it2)
					gerados.insert(abs(it - it2));
			
		printf("%c\n", gerados.size() == n + 1 ? 'Y' : 'N');
	}
}

