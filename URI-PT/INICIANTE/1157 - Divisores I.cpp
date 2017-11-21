// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Divisores I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1157

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

	int n;
	cin >> n;
	for(int i=1; i<=n; i++)
		if(n%i == 0)
			printf("%d\n", i);
}
