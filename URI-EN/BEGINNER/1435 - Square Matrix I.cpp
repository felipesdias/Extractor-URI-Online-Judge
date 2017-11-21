// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Square Matrix I
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1435

#include <bits/stdc++.h>

using namespace std;

int mat[1000][1000];
int main() {
	int n;

	int iniL, iniC, fimL, fimC;
	while( (cin >> n) && n) {
		iniL = iniC = 0;
		fimL = fimC = n;
		int cont = 1;

		while(iniC < fimC) {
			for(int i=iniC; i<fimC; i++)
				mat[iniL][i] = mat[fimL-1][i] = cont;
			for(int i=iniL; i<fimL; i++)
				mat[i][iniC] = mat[i][fimC-1] = cont;
			iniC++;
			iniL++;
			fimC--;
			fimL--;
			cont++;
		}

		for(int i=0; i<n; i++) {
			printf("%3d", mat[i][0]);
			for(int j=1; j<n; j++) {
				printf(" %3d", mat[i][j]);
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}
