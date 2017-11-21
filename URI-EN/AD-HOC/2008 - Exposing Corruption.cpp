// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Exposing Corruption
// Level: 5
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2008

#include <bits/stdc++.h>

using namespace std;

int qt_dsp, qt_ppp;
int qt_rivalidade, dinheiro;
int pd[1000][1000];
bool visitado[1000];

struct Componente {
	int custo;
	int valor;

	Componente() {
		custo = 0;
		valor = 0;
	}

	bool operator < (Componente A) const {
		return custo < A.custo;
	}

};

	

struct Vertice {
	int id;
	int preco;
	bool cor;
	vector<int> rivalidade;
};


vector<Componente> componentes;
Vertice grafo[1000];

void busca(int v) {
	Componente aux;
	queue<int> fila;
	visitado[v] = true;

	fila.push(v);
	aux.custo += grafo[v].preco;

	if(grafo[v].cor)
		aux.valor++;
	else
		aux.valor--;

	while(!fila.empty()) {
		int topo = fila.front();
		fila.pop();

		for(auto &i : grafo[topo].rivalidade) {
			if(!visitado[i]) {
				if(grafo[i].cor)
					aux.valor++;
				else
					aux.valor--;

				aux.custo += grafo[i].preco;

				visitado[i] = true;

				fila.push(i);
			}
		}
	}
	componentes.push_back(aux);
}

int mochila(int item, int custo, int qt_itens, vector<Componente> &compo) {
	if(item == compo.size() || qt_itens == compo.size())
		return 0;

	if(pd[item][qt_itens] != -1)
		return pd[item][qt_itens];


	int com = 0;
	int sem = 0;

	if(custo + compo[item].custo <= dinheiro)
		com = compo[item].valor + mochila(item+1, custo + compo[item].custo, qt_itens+1, compo);

	sem = mochila(item+1, custo, qt_itens, compo);

	return pd[item][qt_itens] = max(sem, com);
}

int main() {
	int a, b;

	cin >> qt_dsp >> qt_ppp >> qt_rivalidade >> dinheiro;

	for(int i=1; i<=qt_dsp; i++) {
		grafo[i].id = i;
		grafo[i].cor = true;
		scanf("%d", &grafo[i].preco);
	}

	for(int i=qt_dsp+1; i <= qt_ppp+qt_dsp; i++) {
		grafo[i].id = i;
		grafo[i].cor = false;
		scanf("%d", &grafo[i].preco);
	}

	for(int i=0; i<qt_rivalidade; i++) {
		scanf("%d%d", &a, &b);
		grafo[a].rivalidade.push_back(b+qt_dsp);
		grafo[b+qt_dsp].rivalidade.push_back(a);
	}

	fill(visitado, visitado+qt_ppp+qt_dsp+10, false);

	for(int i=1; i<=qt_dsp+qt_ppp; i++)
		if(!visitado[i])
			busca(i);

	vector<Componente> cp_dsp;
	vector<Componente> cp_ppp;

	for(auto it : componentes) {
		if(it.valor > 0)
			cp_ppp.push_back(it);
		else if(it.valor < 0) {
			it.valor *= -1;
			cp_dsp.push_back(it);
		}
	}

	sort(cp_dsp.begin(), cp_dsp.end());
	sort(cp_ppp.begin(), cp_ppp.end());

	for(int i=0; i<=cp_dsp.size(); i++)
		for(int j=0; j<=cp_dsp.size(); j++)
			pd[i][j] = -1;

	cout << qt_dsp + mochila(0, 0, 0, cp_dsp) << " ";

	for(int i=0; i<=cp_ppp.size(); i++)
		for(int j=0; j<=cp_ppp.size(); j++)
			pd[i][j] = -1;

	cout << qt_ppp + mochila(0, 0, 0, cp_ppp) << endl;
}
