// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Fatorial
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1936

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define pb push_back

int main() {
	int n, i, fat;
	
	scanf("%d", &n);
	
	vi valores;
	
	for(i = fat = 1; fat < 200000; i++)
		fat *= i, valores.pb(fat);
		
	vi pd(120000, 1<<28);
	pd[0] = 0;
	
	for(i = 1; i <= n; i++)
		for(auto &it : valores)
			if(it <= i)
				pd[i] = min(pd[i], pd[i - it] + 1);
				
	printf("%d\n", pd[n]);
}

