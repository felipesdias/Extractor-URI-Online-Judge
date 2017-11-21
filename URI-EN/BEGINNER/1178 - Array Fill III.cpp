// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Array Fill III
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1178

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	double n;
	
	cin >> n;
	
	for(int i=0; i<100; i++) {
		printf("N[%d] = %.4lf\n", i, n);
		n /= 2;
	}
}
