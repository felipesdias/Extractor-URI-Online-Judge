// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Array Fill II
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1177

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	
	cin >> n;
	
	for(int i=0; i<1000; i++)
		printf("N[%d] = %d\n", i, i%n);
}
