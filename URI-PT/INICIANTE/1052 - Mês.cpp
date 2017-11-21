// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Mês
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1052

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a;
	string meses[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	cin >> a;
	cout << meses[a-1] << endl;
	
	return 0;
}
