// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Produto do Intervalo
// Nível: 5
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1301

#include <bits/stdc++.h>

using namespace std;

const int MAX = 5 * 100000;

struct No {
	int qtdZero, qtdNegativo;
	
	No() { 
		qtdZero = 0;
		qtdNegativo = 0; 
	}
	
	No(int v) { 
		qtdZero = v == 0;
		qtdNegativo = v < 0;
	}
	
	No operator+(const No &a) const {
		No resp;
		
		resp.qtdZero = qtdZero + a.qtdZero;
		resp.qtdNegativo = qtdNegativo + a.qtdNegativo;
		
		return resp;
	}

	bool existe() const {
		return qtdZero != 0 || qtdNegativo != 0;
	}
};

int init[MAX];
No tree[MAX], lazy[MAX];

void build_tree(int node, int a, int b)
{
	if (a > b)
		return;

	// Se folha
	if (a == b)
	{
		tree[node] = No(init[a]);
		lazy[node] = No();
		return;
	}

	build_tree(node * 2, a, (a + b) / 2);
	build_tree(node * 2 + 1, 1 + (a + b) / 2, b);

	// Se nó
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
	lazy[node] = No();
}

void update_tree(int node, int a, int b, int i, int j, No value)
{
	// Se fora do intervalo - retorna
	if (a > b || a > j || b < i)
		return;

	if (lazy[node].existe())
	{
		//Atualização atrasada.
		tree[node] = tree[node] + lazy[node];

		// Passa lazy para filhos
		if (a != b)
		{
			lazy[node * 2] = lazy[node * 2] + lazy[node];
			lazy[node * 2 + 1] = lazy[node * 2] + lazy[node];
		}

		//Reseta o nó
		lazy[node] = No();
	}

	// Se o nó atual cobre todo o intervalo
	if (a >= i && b <= j)
	{
		tree[node] = tree[node] + value;

		if (a != b)
		{
			lazy[node * 2] = lazy[node * 2] + lazy[node];
			lazy[node * 2 + 1] = lazy[node * 2] + lazy[node];
		}

		return;
	}

	// Se tem um pedaço em cada filho.

	// Atualiza os filhos.
	update_tree(node * 2, a, (a + b) / 2, i, j, value);
	update_tree(1 + node * 2, 1 + (a + b) / 2, b, i, j, value);

	// Atualiza o pai.
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

No query_tree(int node, int a, int b, int i, int j)
{
	// Se fora do intervalo
	if (a > b || a > j || b < i)
	{
		//Aqui deverá ser retornado o elemento neutro para a operação desejada
		return No();
	}

	if (lazy[node].existe())
	{
		//Atualização atrasada.
		tree[node] = tree[node] + lazy[node];

		//Se não folha, passa lazy pros filhos
		if (a != b)
		{
			lazy[node * 2] = lazy[node * 2] + lazy[node];
			lazy[node * 2 + 1] = lazy[node * 2] + lazy[node];
		}

		//Reseta o nó
		lazy[node] = No();
	}

	// Se o nó cobre o intervalo
	if (a >= i && b <= j)
		return tree[node];
	
	// Se o intervalo está um pedaço em cada filho.
	auto q1 = query_tree(node * 2, a, (a + b) / 2, i, j);
	auto q2 = query_tree(1 + node * 2, 1 + (a + b) / 2, b, i, j);

	// Retorna a combinação dos intervalos.
	return q1 + q2;
}

int main() {
	int n, m, i, a, b;
	char e;
	
	while(scanf("%d %d", &n, &m) > 0) {
		for(i = 0; i < n; i++)
			scanf("%d", &init[i]);
		
		build_tree(1, 0, n-1);
		
		while(m--) {
			scanf(" %c %d %d", &e, &a, &b);
			
			if(e == 'C') {
				auto v = query_tree(1, 0, n-1, a-1, a-1);
				
				No add(b);
				
				add.qtdZero -= v.qtdZero;
				add.qtdNegativo -= v.qtdNegativo;
				
				update_tree(1, 0, n-1, a-1, a-1, add);
			}
			else {
				auto v = query_tree(1, 0, n-1, a-1, b-1);
				
				if(v.qtdZero > 0)
					printf("0");
				else if(v.qtdNegativo & 1)
					printf("-");
				else
					printf("+");
			}
		}
		
		printf("\n");
	}
}

