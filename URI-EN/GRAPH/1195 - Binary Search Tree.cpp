// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Binary Search Tree
// Level: 4
// Category: GRAPH
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1195

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;

struct No {
	int valor;
	No* filhoE;
	No* filhoD;
};

void pre(No *n) {
	printf(" %d", n->valor);
	if(n->filhoE)
		pre(n->filhoE);
	
	if(n->filhoD)
		pre(n->filhoD);
}

void inFix(No *n) {
	if(n->filhoE)
		inFix(n->filhoE);
	
	printf(" %d", n->valor);
	
	if(n->filhoD)
		inFix(n->filhoD);
}

void pos(No *n) {
	if(n->filhoE)
		pos(n->filhoE);
	
	if(n->filhoD)
		pos(n->filhoD);
	printf(" %d", n->valor);
}


void insere(No *n, int valor) {
	if(n->valor == -1) {
		n->valor = valor;
	} else {
		if(valor > n->valor) {
			if(!n->filhoD) {
				No *aux = new No;
				aux->valor = -1;
				aux->filhoE = NULL;
				aux->filhoD = NULL;
				n->filhoD = aux;
			}
			insere(n->filhoD, valor);
		} else {
			if(!n->filhoE) {
				No *aux = new No;
				aux->valor = -1;
				aux->filhoE = NULL;
				aux->filhoD = NULL;
				n->filhoE = aux;
			}
			insere(n->filhoE, valor);
		}
	}
}

int main() {
	int n, tam, aux, caso;
	
	cin >> n;
	caso = n;
	while(n--) {
		No *raiz = new No;
		raiz->valor = -1;
		raiz->filhoE = NULL;
		raiz->filhoD = NULL;
		
		scanf("%d", &tam);
		for(int i=0; i<tam; i++) {
			scanf("%d", &aux);
			insere(raiz, aux);
		}
		
		printf("Case %d:\n", caso-n);
		
		printf("Pre.:");
		pre(raiz);
		puts("");
		
		printf("In..:");
		inFix(raiz);
		puts("");
		
		printf("Post:");
		pos(raiz);
		puts("");
		puts("");
	}
	
	
}

