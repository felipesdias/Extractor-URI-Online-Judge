// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Summing Consecutive Integers
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1149

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
	int a, n;
	int soma;
	
	cin >> a;
	soma = 0;
	cin >> n;
	while(n <= 0)
		cin >> n;
	
	for(int i=0; i<n; i++)
		soma += a+i;
	
	cout << soma << endl;
}
