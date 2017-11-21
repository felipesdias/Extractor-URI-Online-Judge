// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: DDD
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1050

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	string nome[100];
	nome[61] = "Brasilia";
	nome[71] = "Salvador";
	nome[11] = "Sao Paulo";
	nome[21] = "Rio de Janeiro";
	nome[32] = "Juiz de Fora";
	nome[19] = "Campinas";
	nome[27] = "Vitoria";
	nome[31] = "Belo Horizonte";
	
	int a;
	cin >> a;
	if(a != 61 && a != 71 && a != 11 && a != 21 && a != 32 && a != 19 && a != 27 && a != 31)
		puts("DDD nao cadastrado");
	else
		cout << nome[a] << endl;
	

	return 0;
}
