// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Bloggo Shortcuts
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1239

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {

	bool italic = false, negrito = false;
	char c;
	
	
	while(scanf("%c", &c) != EOF) {
		if(c == '_') {
				printf("<");
				if(italic)
					printf("/");
				printf("i>");
				italic = !italic;
		} else if(c == '*') {
				printf("<");
				if(negrito)
					printf("/");
				printf("b>");
				negrito = !negrito;
		} else
			printf("%c", c);
	}
	
	return 0;
}
