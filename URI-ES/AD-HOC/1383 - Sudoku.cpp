// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Sudoku
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1383

#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

void zera(int vet[]) {
	for(int i=0; i<9; i++)
		vet[i] = 0;
}


int main() {

	int xablau, i, j, k, l;
	int n;
	int matriz[9][9];
	bool acabou;
	int ver[9];
	
	cin >> n;
	
	for(xablau=0; xablau<n; xablau++) {
		acabou = false;
		for(i=0; i<9; i++)
			for(j=0; j<9; j++)
				scanf("%d", &matriz[i][j]);
				
		//linha
		for(i=0; i<9 && !acabou; i++) {
			zera(ver);
			for(j=0; j<9 && !acabou; j++) {
				ver[matriz[i][j]-1]++;
				if(ver[matriz[i][j]-1] > 1) {
					acabou = true;
					//cout << "linha" << endl;	
				}
			}
		}
		//coluna
		for(i=0; i<9 && !acabou; i++) {
			zera(ver);
			for(j=0; j<9 && !acabou; j++) {
				ver[matriz[j][i]-1]++;
				if(ver[matriz[j][i]-1] > 1) {
					acabou = true;
					//cout << "coluna" << endl;	
				}
			}
		}
		//quadrante
	
		for(i=0; i<9 && !acabou; i+=3) {
			for(j=0; j<9 && !acabou; j+=3) {
				zera(ver);
				for(k=i; k<i+3 && !acabou; k++) {
					for(l=j; l<j+3 && !acabou; l++) {
						ver[matriz[k][l]-1]++;
						if(ver[matriz[k][l]-1] > 1) {
							acabou = true;
							//cout << "quadrante" << endl;	
						}
					}
				}
			}
		}
		
		if(acabou)
			printf("Instancia %d\nNAO\n\n", xablau+1);
		else
			printf("Instancia %d\nSIM\n\n", xablau+1);		
	}

	return 0;
}
