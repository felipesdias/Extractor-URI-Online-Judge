// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Fatorial Simples
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1153

#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <climits>

using namespace std;


int main() {
	
	int soma = 1;
	int n;
	cin >> n;

	for(int i=1; i<=n; i++) {
		soma *= i;
	}
	
	cout <<	soma << endl;
}
