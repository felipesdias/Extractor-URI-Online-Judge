// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Compare Substring
// Level: 3
// Category: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1237

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

int procura(string s1, string s2, int pos) {
	int maior = 0;
	
	for(int i=0; i<s2.length(); i++) {
		if(s2[i] == s1[pos]) {
			int aux2=i;
			int aux=pos;
			int cont=0;
			while(s2[aux2] == s1[aux]) {
				cont++;
				aux2++;
				aux++;
				if(s2[aux2] == '\0' || s1[aux] == '\0')
					break;
			}
			if(cont > maior)
				maior = cont;
		}
	}
	
	return maior;
}

int main() {
	string s1, s2;
	int maior, aux1, aux2;
	int cont;
	
	while(getline(cin, s1)) {
		getline(cin, s2);
		maior = 0;
		for(int i=0; i<s1.length(); i++) {	
			for(int j=0; j<s1.length(); j++) {
				cont = 0;
				if(s1[i] == s2[j]) {
					for(int k=i, l=j; k<s1.length() && l<s2.length() ; k++, l++) {
						if(s1[k] != s2[l])
							break;
						cont++;
					}	
				}
				if(cont > maior)
					maior = cont;
			}
		}
		
		printf("%d\n", maior);
	}
}
