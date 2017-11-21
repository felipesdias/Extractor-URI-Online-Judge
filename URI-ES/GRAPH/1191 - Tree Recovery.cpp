// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Tree Recovery
// Nível: %d
// Categoria: GRAPH
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1191

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;

struct No {
	char valor;
	No* filhoE;
	No* filhoD;
};

void pre(No *n) {
	printf("%c", n->valor);
	
	if(n->filhoE)
		pre(n->filhoE);
	
	if(n->filhoD)
		pre(n->filhoD);
	
}

void pos(No *n) {
	if(n->filhoE)
		pos(n->filhoE);
	
	if(n->filhoD)
		pos(n->filhoD);
	
	printf("%c", n->valor);
}


bool insere(No *n, char pivo, char valorInserir, int qualFilho) {
	if(n == NULL)
		return false;
//cout << n->valor << " " << pivo << " " << valorInserir << " " << qualFilho << endl;
	if(n->valor == pivo) {
		No *aux = new No;
		aux->valor = valorInserir;
		aux->filhoE = NULL;
		aux->filhoD = NULL;
		
		if(qualFilho)
			n->filhoD = aux;
		else
			n->filhoE = aux;
		
		return true;
	}
	
		if(!insere(n->filhoE, pivo, valorInserir, qualFilho))
			insere(n->filhoD, pivo, valorInserir, qualFilho);
	
	return false;
}

int qualLado(char pivo, char procurado, string infix) {
	int lado = 0;
	for(int i=0; i<infix.length(); i++) {
		if(infix[i] == pivo) {
			lado = 1;
			return 1;
		}
		if(infix[i] == procurado)
			return lado;
	}
	
	return 1;
}

char procuraCandidato(string infix, string prefix, char pivo, int pos) {
	int pos2;
	for(int i=0; i<infix.length(); i++)
		if(infix[i] == pivo)
			pos2 = i;
		
//cout << "\t" << infix[pos2] << endl;
	
	for(int i=pos2-1; i>=0; i--) {
		for(int j=pos-1; j>=0; j--) {
//cout << "\t" << infix[i] << " " << prefix[j] << endl;
			if(infix[i] == prefix[j])
				return infix[i];
		}
	}
	
	return infix[pos2-2];
}

int main() {
	string prefix, infix;
	
	string dir = "", esq = "";
	char ajuda;
	bool lado;
	
	while(cin >> prefix) {
		lado = 0;
		cin >> infix;
		
		No *raiz = new No;
		raiz->valor = ajuda = prefix[0];
		raiz->filhoE = NULL;
		raiz->filhoD = NULL;
		
		
		for(int i=1; i<prefix.length(); i++) {
			if(qualLado(prefix[i-1], prefix[i], infix))
				insere(raiz, procuraCandidato(infix, prefix, prefix[i], i), prefix[i], 1);
			else
				insere(raiz, prefix[i-1], prefix[i], 0);
		}

//		pre(raiz);
//		puts("");
		pos(raiz);
		puts("");
		
	}
	
	
}

