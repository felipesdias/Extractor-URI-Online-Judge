// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Fatorial de Novo!
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1429

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

#define INF = 1000

using namespace std;


int main() {
	
	char num[6];
	int tam;
	long long int total;

	int fatorial[6];
	fatorial[0] = 1;
	
	for(int i=1; i<=5; i++)
		fatorial[i] = fatorial[i-1]*i;
	
	
	while(scanf("%s", &num) != EOF && num[0] != '0') {
		total = 0;
		tam = strlen(num);
		for(int i=0; i<tam; i++)
			total += (num[i]-'0')*fatorial[tam-i];
		
		printf("%lld\n", total);
	}

}

