// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Impostos Galácticos
// Nível: 6
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2011

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

typedef vector<int> vi;

struct Vertice
{
    int id, a, b;
    double val;

    Vertice(int id, int a, int b) : id(id), a(a), b(b) {}

	Vertice(int id, double val) : id(id), val(val) {}

    bool operator<(Vertice a) const
    {
        return a.val < val;
    }
};

typedef vector<Vertice> vv;
typedef vector<vv> vvv;

struct Grafo
{
    vvv g;
    int n;

    Grafo(int n) : n(n)
    {
        g = vvv(n, vv());
    }

    void operator=(Grafo const &a)
    {
        g = a.g;
        n = a.n;
    }

    void addAresta(int a, int b, int c, int d)
    {
        g[a].pb(Vertice(b, c, d));
    }

    void removeAresta(int a, int b)
    {
        g[a].erase(remove_if(g[a].begin(), g[a].end(), [b](Vertice v) { return v.id == b; }));
    }

    double dijkstra(int s, int d, double t)
    {
        priority_queue<Vertice> fila;
        bool visitados[n];

        fill(visitados, visitados+n, 0);

        fila.push(Vertice(s, 0));

        auto top = fila.top();

        while (top.id != d)
        {
            if (!visitados[top.id])
            {
                for (auto &it : g[top.id])
                    if (!visitados[it.id])
                        fila.push(Vertice(it.id, it.a * t + it.b + top.val));

                visitados[top.id] = 1;
            }

            fila.pop();

            if (fila.empty())
                assert(false);

            top = fila.top();
        }

        return top.val;
    }
};

int ini = 0, fim;

double gss(double a, double b, Grafo &g, double e = 1e-12) {
    double r = (sqrt(5)-1)/2; //=.618...=golden ratio-1
    double x1 = b-r*(b-a), x2 = a+r*(b-a);
    double f1 = g.dijkstra(ini, fim, x1), f2 = g.dijkstra(ini, fim, x2);
    
    while (true) {
        if (f1 > f2) { //change to > to find maximum
            b = x2; x2 = x1; f2 = f1;
            x1 = b-r*(b-a); f1 = g.dijkstra(ini, fim, x1);
        } else {
            a = x1; x1 = x2; f1 = f2;
            x2 = a+r*(b-a); f2 = g.dijkstra(ini, fim, x2);
        }
        
        if(fabs(f1-f2) < e)
			break;
    }
    
    return f1;
}

int main()
{
	int n, m, a, b, c, d;
	
	while(cin >> n >> m) {	
		fim = n-1;
		
		Grafo g(n);

		while(m--)
			cin >> a >> b >> c >> d, g.addAresta(a - 1, b - 1, c, d), g.addAresta(b - 1, a - 1, c, d);

		cout << fixed << setprecision(5) << gss(0.0, 1440.0, g) << endl;
	}
}


