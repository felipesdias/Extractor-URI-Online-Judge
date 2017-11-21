// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Tiles
// Level: 5
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2246

#include <bits/stdc++.h>

using namespace std;

int mat[300][300];
bool visitado[300][300];
int l, h;

int flood(int i, int j, int cor) {
	if(visitado[i][j] || mat[i][j] != cor || i < 0 || i >= h || j < 0 || j >= l)
		return 0;
		
	visitado[i][j] = true;
	
	return 1+flood(i+1, j, cor) + flood(i-1, j, cor) + flood(i, j+1, cor) + flood(i, j-1, cor);	
}

int main() {
	cin >> h >> l;
	
	for(int i=0; i<h; i++) {
		fill(visitado[i], visitado[i]+l+10, false);
		for(int j=0; j<l; j++)
			scanf("%d", &mat[i][j]);
	}
			
	int mini = INT_MAX;
	for(int i=0; i<h; i++)
		for(int j=0; j<l; j++)
			if(!visitado[i][j])
				mini = min(mini, flood(i, j, mat[i][j]));

			cout << mini << endl;
}

