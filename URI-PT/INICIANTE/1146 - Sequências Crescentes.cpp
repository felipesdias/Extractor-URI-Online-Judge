// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Sequências Crescentes
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1146

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
	int x;
	
	
	scanf("%d%", &x);
	while(x != 0) {
		printf("1");
		for(int i=2; i<=x; i++) {
			printf(" %d",i);
		}
		puts("");
		scanf("%d", &x);
	}
}
