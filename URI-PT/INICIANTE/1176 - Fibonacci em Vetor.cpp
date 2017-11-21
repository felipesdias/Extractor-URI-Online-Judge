// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Fibonacci em Vetor
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1176

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long int n, num;
	
	long long int fibo[61];
	fibo[0] = 0;
	fibo[1] = 1;
	
	for(long long int i=2; i<=60; i++)
		fibo[i] = fibo[i-1]+fibo[i-2];
	
	cin >> n;
	
	while(n--) {
		scanf("%lld", &num);
		printf("Fib(%lld) = %lld\n", num, fibo[num]);
	}
}
