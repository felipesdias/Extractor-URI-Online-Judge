// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Going to the Market
// Level: 2
// Category: DATA STRUCTURES AND LIBRARIES
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1281

#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, m, qt;
	double total, preco;
	string nome;
	map<string, double> lista;
	
	scanf("%d", &n);
	
	while(n--) {
		total = 0.0;
		
		scanf("%d", &m);
		
		while(m--) {
			cin >> nome >> preco;
			lista[nome] = preco;
		}
		
		scanf("%d", &m);
		
		while(m--) {
			cin >> nome >> qt;
			total += qt * lista[nome];
		}
		
		printf("R$ %.2lf\n", total);
	}
	
	return 0;
}
