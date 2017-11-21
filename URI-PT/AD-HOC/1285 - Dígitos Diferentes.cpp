// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Dígitos Diferentes
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1285

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool tem(int x) {
	int cont = 0;
	int num[4];

//cout << x << endl;	
	while(x) {
		num[cont] = x%10;
		x = x/10;
		cont++;
	}
//cout << x << endl << endl;

	
	for(int i=0; i<cont; i++)
		for(int j=i+1; j<cont; j++)
			if(num[i] == num[j])
				return true;
				
	return false;
}

int main() {
	int n, m;
	int cont;
	while(cin >> n >> m) { 
		cont = 0;
		for(int i=n; i<=m; i++)
			if(tem(i))
				cont++;

		cout << abs(1+m-n-cont) << endl;
	}

	return 0;
}
