// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Seis Números Impares
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1070

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a;
	cin >> a;
	
	if(a%2 == 0)
		a++;
	
	for(int i=0; i<6; i++,a+=2)
		cout << a << endl;

}
