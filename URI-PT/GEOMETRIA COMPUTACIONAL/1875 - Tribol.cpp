// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Tribol
// Nível: 1
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1875

#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;

	int valor[254][254];
	valor['R']['G'] = 2;
	valor['R']['B'] = 1;

	valor['G']['B'] = 2;
	valor['G']['R'] = 1;

	valor['B']['R'] = 2;
	valor['B']['G'] = 1;

	int ponto[256];

	char a, b;

	while(n--) {
		int p;
		cin >> p;

		ponto['R'] = ponto['G'] = ponto['B'] = 0;
		while(p--) {
			cin >> a >> b;
			ponto[a] += valor[a][b];
		}

		if(ponto['R'] > ponto['G'] && ponto['R'] > ponto['B'])
			puts("red");
		else if(ponto['G'] > ponto['B'] && ponto['G'] > ponto['R'])
			puts("green");
		else if(ponto['B'] > ponto['R'] && ponto['B'] > ponto['G'])
			puts("blue");
		else if(ponto['R'] == ponto['G'] && ponto['G'] == ponto['B'])
			puts("trempate");
		else
			puts("empate");
	}
}

