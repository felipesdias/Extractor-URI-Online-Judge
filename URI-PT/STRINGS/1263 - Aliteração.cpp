// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Aliteração
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1263

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
 
using namespace std;
 
int main() {
 
    char c;
	char ola[101];
	int cont;
	int cont2;
    bool ggwp = true;
    bool primeira = true; 
	bool gambi; 
 
    while(ggwp) {
        primeira = true;
		cont = 0;
		cont2 = 0;
		gambi = true;
        while(scanf("%c", &c) != EOF) {
			if(primeira) {
				ola[cont] = tolower(c);
				cont++;                
				primeira = false;
			}
            else if(c == ' ')
                primeira = true;
			else if(c == '\n')
				break;
        }
		if(primeira)
			break;
        for(int bow=0; bow<cont; bow++) {
			c = ola[bow];
			while(c == ola[bow+1]) {
				if(gambi) {
					cont2++;
					gambi = false;
				}
				bow++;	
			}
			gambi = true;
		}
		cout << cont2 << endl;
    }
 
    return 0;
}
