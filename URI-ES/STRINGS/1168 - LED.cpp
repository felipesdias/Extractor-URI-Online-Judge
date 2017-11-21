// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: LED
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1168

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	string s;
	int vet[10] = {6,2,5,5,4,5,6,3,7,6};
	int n;
	long long int cont;
	
	cin >> n;
	
	while(n--) {
		cin >> s;
		cont = 0;
		for(int i=0; i<s.length(); i++)
			cont += vet[s[i]-'0'];
		cout << cont << " leds\n";
	}
}
