// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Exceeding Z
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1150

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
	int a, n, i;
	int soma;
	
	cin >> a;
	soma = 0;
	
	cin >> n;
	while(n <= a)
		cin >> n;
	
	for(i=0; ; i++) {
		if(soma >= n)
			break;
		soma += a+i;
	}
	
	cout << i << endl;
}
