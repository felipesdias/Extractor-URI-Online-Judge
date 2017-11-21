// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Array Selection I
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1174

#include <bits/stdc++.h>

using namespace std;

bool crivoB[10000001]; //False = Primo,  True = Não Primo

void crivoBool(int max) {
	crivoB[0] = crivoB[1] = true;
	for(int i=2; i<=max; i++)
		if(!crivoB[i])
			for(int j=i+i; j<=max; j+=i)
				crivoB[j] = true;
}

int main() {
	
	double n;
	
	
	for(int i=0; i<100; i++) {
		scanf("%lf", &n);
		if(n <= 10)
			printf("A[%d] = %.1lf\n", i, n);
	}

	return 0;
}
