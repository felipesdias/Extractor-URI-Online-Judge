// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Height Map
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2012

#include <bits/stdc++.h>
#define D(x) //cout << #x << " = " << x << endl

using namespace std;

int l, c;
bool visitado[200][200];
int mat[200][200];

void propaga(int i, int j, int val) {
	if(mat[i][j] != val || visitado[i][j])
		return;
		
	visitado[i][j] = true;
	
	propaga(i-1, j, val);
	propaga(i+1, j, val);
	propaga(i, j+1, val);
	propaga(i, j-1, val);
}

int main() {
	cin >> l >> c;
	
	int CB, BC, ED, DE, TOP;
	CB = BC = ED = DE = TOP = 0;

	
	for(int i=0; i<=l+1; i++) {
		mat[i][0] = mat[i][c+1] = -1;
		visitado[i][0] = visitado[i][c+1] = true;
	}
		
	for(int i=0; i<=c+1; i++) {
		mat[0][i] = mat[l+1][i] = -1;
		visitado[0][i] = visitado[l+1][i] = true;
	}
	
	
	for(int i=1; i<=l; i++) {
		for(int j=1; j<=c; j++) {
			scanf("%d", &mat[i][j]);
			visitado[i][j] = false;
		}
	}
	
	for(int i=1; i<=l; i++) {
		for(int j=1; j<=c; j++) {
			if(!visitado[i][j]) {
				TOP++;
				propaga(i, j, mat[i][j]);
			}
		}
	}
	
	int ini, fim;
	int iniAtual, fimAtual;

	//Baixo cima
	for(int i=l; i>1; i--) {
		fim = -2000000000;
		ini = 2000000000;
		for(int j=1; j<=c; j++) {
			iniAtual = mat[i][j];
			fimAtual = mat[i-1][j];
			if(fimAtual <= iniAtual) {
				fim = -2000000000;
				ini = 2000000000;
			}
			else {
				if(iniAtual >= fim || fimAtual <= ini)
					BC++;
				fim = fimAtual;
				ini = iniAtual;
			}
		}
	}

	//Cima baixo
	for(int i=1; i<l; i++) {
		fim = -2000000000;
		ini = 2000000000;
		for(int j=1; j<=c; j++) {
			iniAtual = mat[i][j];
			fimAtual = mat[i+1][j];

			if(fimAtual <= iniAtual) {
				fim = -2000000000;
				ini = 2000000000;
			}
			else {
				if(iniAtual >= fim || fimAtual <= ini)
					CB++;
				fim = fimAtual;
				ini = iniAtual;
			}
		}
	}


	//Esq Dir
	for(int j=1; j<c; j++) {
		fim = -2000000000;
		ini = 2000000000;
		for(int i=1; i<=l; i++) {
			iniAtual = mat[i][j];
			fimAtual = mat[i][j+1];
			if(fimAtual <= iniAtual) {
				fim = -2000000000;
				ini = 2000000000;
			}
			else {
				if(iniAtual >= fim || fimAtual <= ini)
					ED++;
				fim = fimAtual;
				ini = iniAtual;
			}
		}
	}

	//Dir Esq
	for(int j=c; j>1; j--) {
		fim = -2000000000;
		ini = 2000000000;
		for(int i=1; i<=l; i++) {
			iniAtual = mat[i][j];
			fimAtual = mat[i][j-1];
			if(fimAtual <= iniAtual) {
				fim = -2000000000;
				ini = 2000000000;
			}
			else {
				if(iniAtual >= fim || fimAtual <= ini)
					DE++;
				fim = fimAtual;
				ini = iniAtual;
			}
		}
	}
	
	D(BC);
	D(CB);
	D(ED);
	D(DE);

	D(TOP);
	
	cout << CB+BC+ED+DE+TOP+5 << endl;
	
	return 0;
}

