// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Conversão Simples de Base
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1199

#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <climits>

using namespace std;

void tohex(long long int n) {
	if(n == 0)
		return;
	
	tohex(n/16);
	
	switch(n%16) {
		case 10:
			printf("A");
			break;
		case 11:
			printf("B");
			break;
		case 12:
			printf("C");
			break;
		case 13:
			printf("D");
			break;
		case 14:
			printf("E");
			break;
		case 15:
			printf("F");
			break;
		default:
			cout << n%16;
			break;
	}
}

unsigned long long int toint(string s) {
    unsigned long long int aux = 0;

	for(int i=0; i<s.length(); i++) {
		if(s[i] >= '0' && s[i] <= '9')
			aux += (s[i]-'0') * pow(16, s.length()-i-1);
		else if(s[i] >= 'A' && s[i] <= 'Z')
			aux += (s[i]-'A'+10) * pow(16, s.length()-i-1);
		else
			aux += (s[i]-'a'+10) * pow(16, s.length()-i-1);
	}
	
    return aux;
}

int main() {
	long long int n;
	string s;
	char c;
	
	cin >> n;
	
	while(n >= 0) {
		cin.get(c);
		if(c == 'x') {
			cin >> s;	
			cout << toint(s) << endl;
		} else {
			printf("0x");
			if(n == 0)
				puts("0");
			else {
				tohex(n);
				puts("");
			}
		}
		
		cin >> n;
	}
}
