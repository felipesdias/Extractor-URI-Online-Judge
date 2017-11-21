// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Bolsa de Valores
// Nível: 4
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1932

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main() {
	int n, c, resp = 0;
	
	scanf("%d %d", &n, &c);
	
	vi valores(n);
	
	for(auto &it : valores)
		scanf("%d", &it);
	
	int maxi, mini;
	
	maxi = mini = valores[0];
	
	for(int i = 1; i <= n; i++) 
	{
		if(i == n || valores[i-1] - valores[i] > c || valores[i] <= mini || maxi - valores[i] > c)
		{
			resp += max(0, maxi - mini - c);
			
			maxi = mini = valores[i];
		}
		else 
		{
			maxi = max(valores[i], maxi);
		}
	}
	
	printf("%d\n", resp);
}

