// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Simple Factorial
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1153

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
