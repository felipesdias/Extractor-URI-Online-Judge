// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Factorial Sum
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1161

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

struct No {
	int num;
	No *esq;
	No *dir;

	No() {
		esq = NULL;
		dir = NULL;
	}
};

void insere(No *atual, int numero) {
	if(numero < atual->num) {
		if(atual->esq == NULL) {
			No *novo = new No;
			novo->num = numero;
			atual->esq = novo;
			return;
		} else
			insere(atual->esq, numero);
	} else {
		if(numero > atual->num) {
			if(atual->dir == NULL) {
				No *novo = new No;
				novo->num = numero;
				atual->dir = novo;
				return;
			} else
				insere(atual->dir, numero);
		}
	}
}

void preFixa(No *atual) {
	if(atual == NULL)
		return;
	printf(" %d", atual->num);
	preFixa(atual->esq);
	preFixa(atual->dir);
}

void inFixa(No *atual) {
	if(atual == NULL)
		return;

	inFixa(atual->esq);	
	printf(" %d", atual->num);
	inFixa(atual->dir);
}

void posFixa(No *atual) {
	if(atual == NULL)
		return;

	posFixa(atual->esq);
	posFixa(atual->dir);
	printf(" %d", atual->num);
}

int main() {
	long long a, b;
	long long int n, m;
	while(cin >> n >> m) {
		a = b = 1;
		while(n) {
			a *= n;
			n--;
		}
		while(m) {
			b *= m;
			m--;
		}
		cout << a+b << endl;
	}

	return 0;
}
