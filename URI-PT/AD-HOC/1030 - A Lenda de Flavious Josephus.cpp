// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: A Lenda de Flavious Josephus
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1030

#include <stdio.h>

typedef struct No {
	int v;
	No *proximo, *anterior;
} No;

No* criar(int n) {
	No *raiz, *curr, *novo;
	int i;
	
	raiz = new No;
	raiz->v = 1;
	
	curr = raiz;
	
	for(i = 2; i <= n; i++) {
		novo = new No;
		novo->v = i;
		
		novo->anterior = curr;
		curr->proximo = novo;
		
		curr = novo;
	}
	
	curr->proximo = raiz;
	raiz->anterior = curr;
	
	return curr;
}

int ultimo(No *atual, int passo) {
	int i;
	No *prox;
	
	while(atual->proximo != atual) {		
		for(i = 0; i < passo; i++) 
			atual = atual->proximo;
		
		atual->anterior->proximo = atual->proximo;
		prox = atual->proximo->anterior = atual->anterior;
		
		delete atual;
		atual = prox;
	}
	
	return atual->v;
}

int main() {
	int n, t, a, b;
	
	scanf("%d", &n);
	
	for(t = 1; t <= n; t++) {
		scanf("%d %d", &a, &b);
		
		printf("Case %d: %d\n", t, ultimo(criar(a), b));
	}
}
