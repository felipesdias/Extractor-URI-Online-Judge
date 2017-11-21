// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Just a Bit Sorted
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2009

#include <bits/stdc++.h>

using namespace std;

#define D(x) cout << #x << " = " << x << endl

unsigned long long numeros[5100][5100];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j, n, q;
	
	for(i = 0; i < 5100; i++)
		numeros[i][0] = 1;
		
	for(i = 1; i < 5100; i++)
		for(j = 1; j < 5100; j++)
			numeros[i][j] = (((i - j) * numeros[i - 1][j - 1]) % 1000000007 + ((j + 1) * numeros[i - 1][j]) % 1000000007) % 1000000007;
			
	
	for(i = 1; i < 5100; i++)
		for(j = 1; j < 5100; j++)
			numeros[i][j] += numeros[i][j-1],
			numeros[i][j] %= 1000000007;
			
	cin >> n >> q;
	
	while(q--)
		cin >> i,
		cout << numeros[n][min(i - 1, n)] << " \n"[q == 0];
}

