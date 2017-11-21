// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Complete Sentence
// Level: 3
// Category: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1551

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

int main() {
	int n, cont;
	
	string s;
	
	cin >> n;
	cin.get();
	
	while(n--) {
		bool vet[26] = {false};
		cont = 0;
		
		
		getline(cin, s);
		
		for(int i=0; i<s.length(); i++) {
			if(s[i] >= 'a' && s[i] <= 'z')
			if(!vet[s[i]-'a']) {
				cont++;
				vet[s[i]-'a'] = true;
				if(cont == 26)
					break;
			}
		}

		if(cont == 26)
			puts("frase completa");
		else if(cont > 13)
			puts("frase quase completa");
		else
			puts("frase mal elaborada");
	}
}
