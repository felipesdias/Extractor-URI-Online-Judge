// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: O Maior
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1013

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

 
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	cout << max(a, max(b,c)) << " eh o maior\n";
}
