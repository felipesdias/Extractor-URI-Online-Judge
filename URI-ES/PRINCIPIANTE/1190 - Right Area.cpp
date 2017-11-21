// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Right Area
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1190

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main() {
	double mat[12][12];
	char c;
	double total;

	cin >> c;

	for(int i=0; i<12; i++)
		for(int j=0; j<12; j++)
			cin >> mat[i][j];


	total = 0.0;
/*
	for(int i=0; i<6; i++)
		for(int j=0; j<i; j++)
			total += mat[i][j];
*/
	for(int i=0; i<6; i++)
		for(int j=12-i; j<12; j++)
			total += mat[i][j];
/*
	for(int i=6; i<12; i++)
		for(int j=10-i; j>=0; j--)
			total += mat[i][j];
*/
	for(int i=6; i<12; i++)
		for(int j=i+1; j<12; j++)
			total += mat[i][j];
	if(c == 'M')
		total /= 30.0;

	printf("%.1f\n", total);


	return 0;
}
