// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Distribuição Igual
// Nível: 7
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1747

#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b)
{
    int remainder;
    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

typedef vector<int> vi;
typedef vector<vi> vvi;

vector<set<int> > visitados;
vi valores;
vvi grafo;
set<int> resposta;

void busca(int atual, int v) {
	if(visitados[atual].count(v))
		return;
		
	visitados[atual].insert(v);
	resposta.insert(v);	
	
	for(auto &it : grafo[atual])
		busca(it, mdc(v, valores[it]));
}

int main() {
	int a, b, n, m;
	
	scanf("%d %d", &n, &m);
	
	visitados = vector<set<int> >(n);
	
	valores = vi(n);
	grafo = vvi(n);
	
	for(auto &it: valores)
		scanf("%d", &it);
		
	while(m--) 
	{
		scanf("%d %d", &a, &b);
		
		grafo[a-1].push_back(b-1);
		grafo[b-1].push_back(a-1);
	}

	for(int i = 0; i < n; i++) 
		busca(i, valores[i]);
	
	printf("%d\n", resposta.size());
}

