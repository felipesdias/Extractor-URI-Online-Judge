// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Loteria
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1942

#include <bits/stdc++.h> 
using namespace std;
class XOR_GAUSSIAN { // XOR Gaussian Elimination
public:
    static const int MAXN = 32767, MAXM = 64;
    char mtx[MAXN][MAXM+1], varX[MAXN];
    int compute(int n, int m) {
    	int row = 0, col = 0, arb = 0;
    	int equ = n, var = m;
    	while (row < equ && col < var) {
    		int c = row;
    		for (int i = row; i < equ; i++)
    			if (mtx[i][col])
    				c = i;
    		for (int i = 0; i <= var; i++)
                swap(mtx[c][i], mtx[row][i]);
    		if (mtx[row][col] == 0) {
    			col++, arb++;
    			continue;
    		}    		
    		for (int i = 0; i < equ; i++) {
    			if (i == row || mtx[i][col] == 0) continue;
    			for (int j = var; j >= 0; j--)
    				mtx[i][j] ^= mtx[row][j];
    		}
    		row++, col++;
    	}
    	return row;
    	memset(varX, 0, sizeof(varX));
    	for (int i = 0, j; i < equ; i++) {
    		if (mtx[i][var] == 0)
    			continue;
    		for (j = 0; j < var && mtx[i][j] == 0; j++);
    		varX[j] = mtx[i][var];
    	}
    }
} gauss;

int main() {
	int n, m, x;
	while (scanf("%d %d", &n, &m) == 2) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				scanf("%d", &x);
				gauss.mtx[i][j] = x&1;
			}
		}
		
		int rank = gauss.compute(n, m);
		if (rank < m)	puts("S");
		else {
			if (n > rank)	puts("N");	// for zeroes
			else			puts("S");
		}
	}
	return 0;
}
