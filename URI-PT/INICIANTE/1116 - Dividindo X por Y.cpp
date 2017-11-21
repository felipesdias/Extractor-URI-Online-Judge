// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Dividindo X por Y
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1116

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;


int main() {
	int n;
	double a, b;
	cin >> n;
	
	while(n--) {
		scanf("%lf%lf", &a, &b);
		if(b != 0)
			printf("%.1lf\n", a/b);
		else
			puts("divisao impossivel");
	}
}

