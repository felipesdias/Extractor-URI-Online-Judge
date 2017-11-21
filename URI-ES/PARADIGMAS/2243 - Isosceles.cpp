// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Isosceles
// Nível: %d
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2243

#include <bits/stdc++.h>

using namespace std;

int n;
int vet[60000];
int pd[60000];
int pd2[60000];


int main() {
	
	cin >> n;
	
	fill(vet, vet+n+10, 0);
	fill(pd, pd+n+10, 1);
	fill(pd2, pd2+n+10, 1);
	
	
	for(int i=0; i<n; i++)
		scanf("%d", &vet[i]);
	
	for(int i=1; i<n; i++) {
		if(vet[i] > pd[i-1])
			pd[i] = pd[i-1]+1;
		else
			pd[i] = vet[i];
	}
	
	for(int i=n-1; i>0; i--) {
		if(vet[i-1] > pd2[i])
			pd2[i-1] = pd2[i]+1;
		else
			pd2[i-1] = vet[i-1];
	}
	
	int maior = 0;
	
	for(int i=0; i<n; i++)
		maior = max(maior, min(pd[i], pd2[i]));
	
	cout << maior << endl;
		
}

