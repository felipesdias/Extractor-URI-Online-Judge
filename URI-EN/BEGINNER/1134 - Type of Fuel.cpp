// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Type of Fuel
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1134

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
	int vet[3] = {0};
	
	cin >> n;
	while(n != 4) {
		if(n>=1 && n<=4)
			vet[n-1]++;
		cin >> n;
	}
	
	puts("MUITO OBRIGADO");
	
	printf("Alcool: %d\n", vet[0]);
	printf("Gasolina: %d\n", vet[1]);
	printf("Diesel: %d\n", vet[2]);
	
	return 0;
}
