// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Etruscan Warriors Never P...
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1308

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
	long long int n;
	long long int p;
	cin >> n;
	while(n--) {
		scanf("%lld", &p);
		p = (-1+sqrt(1 + 4*2*p))/2;
		printf("%lld\n", p);
	}
}
