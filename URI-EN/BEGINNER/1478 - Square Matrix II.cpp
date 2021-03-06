// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Square Matrix II
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1478

#include <bits/stdc++.h>

using namespace std;

int mat[1000][1000];
int main() {
	int n;

	int iniL, iniC, fimL, fimC;
	while( (cin >> n) && n) {
		for(int i=0; i<n; i++) {
			printf("%3d", i+1);
			for(int j=1; j<n; j++)
				printf(" %3d", abs(i-j)+1);
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}
