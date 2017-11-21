// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Line in Array
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1181

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	double soma, num;
	int n;
	char c;
	
	cin >> n >> c;
	
	for(int i=0; i<12; i++) {
		for(int j=0; j<12; j++) {
			scanf("%lf", &num);
			if(i==n)
				soma += num;
		}
	}
	
	if(c == 'S')
		printf("%.1lf\n", soma);
	else
		printf("%.1lf\n", soma/12.0);
	
}
