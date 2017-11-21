// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Go--
// Level: 5
// Category: DATA STRUCTURES AND LIBRARIES
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2241

#include <bits/stdc++.h>

using namespace std;

int matriz1[501][501], matriz2[501][501], matriz3[501][501], matriz4[501][501], matriz5[501][501], matriz6[501][501],
	(*pdB_vv)[501], (*pdB_v)[501], (*pdB_n)[501], (*pdP_vv)[501], (*pdP_v)[501], (*pdP_n)[501];

int main() {
	int n, p, i, j, d, l, c, qtdp = 0, qtdb = 0;
	
	pdB_n = matriz1;
	pdB_v = matriz2;
	pdB_vv = matriz3;
	pdP_n = matriz4;
	pdP_v = matriz5;
	pdP_vv = matriz6;
	
	scanf("%d %d", &n, &p);
	
	memset(pdB_n, 0, 501*501*sizeof(int));
	memset(pdB_v, 0, 501*501*sizeof(int));
	memset(pdP_n, 0, 501*501*sizeof(int));
	memset(pdP_v, 0, 501*501*sizeof(int));
	
	for(i = 0; i < p; i++)
		scanf("%d %d", &l, &c), pdP_n[l-1][c-1] = 1, qtdp++;

	for(i = 0; i < p; i++)
		scanf("%d %d", &l, &c), pdB_n[l-1][c-1] = 1, qtdb++;
	
	for(d = 1; d < n; d++) {
		swap(pdB_vv, pdB_v);
		swap(pdB_n, pdB_v);
		swap(pdP_vv, pdP_v);
		swap(pdP_n, pdP_v);
		
		memset(pdB_n, 0, 501*501*sizeof(int));
		memset(pdP_n, 0, 501*501*sizeof(int));
		
		for(i = 0; i < n-d; i++) 
			for(j = 0; j < n-d; j++) {
				pdB_n[i][j] = (pdB_v[i][j] + pdB_v[i][j+1] + pdB_v[i+1][j] + pdB_v[i+1][j+1]) > 0;
				pdP_n[i][j] = (pdP_v[i][j] + pdP_v[i][j+1] + pdP_v[i+1][j] + pdP_v[i+1][j+1]) > 0;
				
				if(pdB_n[i][j] && pdP_n[i][j] == 0)
					qtdb++;
				else if(pdP_n[i][j] && pdB_n[i][j] == 0)
					qtdp++;
			}
	}
	
	printf("%d %d\n", qtdp, qtdb);
}
