// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Flores Florescem da França
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1140

#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char c;
	char padrao;
	bool ggwp = true;
	bool erooou;
	bool primeira = true;	

	for(;ggwp;) {
		primeira = true;
		erooou = false;
		for(cin.get(c), padrao = tolower(c); c != '\n'; cin.get(c)) {
			if(primeira && tolower(c) != padrao)
				erooou = true;
			else if(c == ' ')
				primeira = true;
			else if(c == '*') {
				ggwp = false;
				break;
			} else
				primeira = false;
		}
		if(erooou && ggwp)
			cout << "N" << endl;
		else if(ggwp)
			cout << "Y" << endl;
	}

	return 0;
}
