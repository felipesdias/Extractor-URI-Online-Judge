// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Nossos Dias Nunca Voltarão
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1864

#include <stdio.h>
#include <string>

using namespace std;

int main() {
	int n;
	string frase;
	
	frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";

	scanf("%d", &n);
	
	frase[n] = 0;
	
	puts(frase.c_str());
	
	return 0;
}
