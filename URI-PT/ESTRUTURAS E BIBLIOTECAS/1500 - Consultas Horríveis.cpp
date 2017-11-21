// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Consultas Horríveis
// Nível: 7
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1500

#include <algorithm>
#include <stdio.h>

using namespace std;

#define MAX 1000000 // O valor aqui tem que ser >= 2 * tamanho do maior n

long long int init[MAX], tree[MAX]; // Não necessáriamente é um int, pode ser uma segtree de struct etc;
long long int lazy[MAX]; // Marca se o nó deve ser atualizado ou não, pode ser um struct, dependendo da operação de atualização.
 
void build_tree(long long int node, long long int a, long long int b) {
    if(a > b) 
		return;
     
    if(a == b) {
        tree[node] = init[a];
		lazy[node] = 0;
        return;
    }
     
    build_tree(node*2, a, (a+b)/2);
    build_tree(node*2+1, 1+(a+b)/2, b);
    
    tree[node] = tree[node*2] + tree[node*2+1];
	lazy[node] = 0;
}

void update_tree(long long int node, long long int a, long long int b, long long int i, long long int j, long long int value) {
	if(a > b)
		return;
	
	if(lazy[node] != 0) {
		tree[node] += lazy[node] * (b-a+1);
		
		if(a != b) {
			lazy[node*2] += lazy[node];
			lazy[node*2+1] += lazy[node];
		}
		
		lazy[node] = 0;
	}
	
    if(a > j || b < i)
        return;
         
    if(a >= i && b <= j) {
		tree[node] += value * (b-a+1);
		
		if(a != b) {
			lazy[node*2] += value;
			lazy[node*2+1] += value;
		}
		
        return;
    }
 
    update_tree(node*2, a, (a+b)/2, i, j, value);
    update_tree(1+node*2, 1+(a+b)/2, b, i, j, value);
	
    tree[node] = tree[node*2] + tree[node*2+1];
}

long long int query_tree(long long int node, long long int a, long long int b, long long int i, long long int j) {
    if(a > b || a > j || b < i) { 
		return 0;
	}
	
    if(lazy[node] != 0) {
		tree[node] += lazy[node] * (b-a+1);
		
		if(a != b) {
			lazy[node*2] += lazy[node];
			lazy[node*2+1] += lazy[node];
		}
		
		lazy[node] = 0;
	}
 
    if(a >= i && b <= j)
        return tree[node];
 
    long long int q1 = query_tree(node*2, a, (a+b)/2, i, j);
    long long int q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j);
 
    return q1 + q2;
}

int main () {
	long long int t, a, b, op, v, i, n, m;
	
	scanf("%lld", &t);
	
	while(t--) {
		scanf("%lld %lld", &n, &m);
		
		for(i = 0; i < 1000000; i++)
			init[i] = lazy[i] = 0;
		
		build_tree(1, 0, n-1);
		
		while(m--) {
			scanf("%lld %lld %lld", &op, &a, &b);
			
			if(op)
				printf("%lld\n", query_tree(1, 0, n-1, a-1, b-1));
			else {
				scanf("%lld", &v);
				
				update_tree(1, 0, n-1, a-1, b-1, v);
			}
		}
	}
	
	return 0;
}
