// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Logical Sequence
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1144

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

char s[100000000];

int main() {
	int n;
	cin >> n;

	
	for(long long int i=1; i<=n; i++) {
		printf("%lld %lld %lld\n", i, i*i, i*i*i);
		printf("%lld %lld %lld\n", i, (i*i)+1, (i*i*i)+1);
	}
}
