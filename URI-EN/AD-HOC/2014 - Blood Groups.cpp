// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Blood Groups
// Level: 6
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2014

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

typedef vector<int> vi;

#define D(x) cerr << #x << " = " << x << endl

vector<int> correcao;

struct Vertice
{
    int id, pai;
    ll dist;

    Vertice(int id, ll dist = 1, int pai = -1) : id(id), dist(dist), pai(pai) {}

    bool operator<(Vertice a) const
    {
        return a.dist < dist;
    }
};

typedef vector<Vertice> vv;
typedef vector<vv> vvv;

struct Grafo
{
    vvv g;
    vi pais;
    int n;

    Grafo(int n) : n(n)
    {
        g = vvv(n, vv());
        pais = vi(n);
    }

    void operator=(Grafo const &a)
    {
        g = a.g;
        pais = a.pais;
        n = a.n;
    }

    void addAresta(int a, int b, ll d = 0)
    {
        g[a].pb(Vertice(b, d));
    }

    void removeAresta(int a, int b)
    {
        g[a].erase(remove_if(g[a].begin(), g[a].end(), [b](Vertice v)
        {
            return v.id == b;
        }));
    }

    ll valAresta(int a, int b)
    {
        for (auto it : g[a])
            if (it.id == b)
                return it.dist;

        return 0;
    }

    void modificaAresta(int a, int b, ll dif)
    {
        for (auto it = g[a].begin(); it != g[a].end(); it++)
        {
            if (it->id == b)
            {
                it->dist += dif;
                
                if (it->dist == 0)
                    g[a].erase(it);
                
                return;
            }
        }
        
        addAresta(a, b, dif);
    }

    ll dijkstra(int s, int d)
    {
        priority_queue<Vertice> fila;
        bool visitados[n];

        fill(visitados, visitados + n, 0);
        fill(pais.begin(), pais.end(), -1);

        fila.push(Vertice(s, 0));

        auto top = fila.top();

        while (top.id != d)
        {
            if (!visitados[top.id])
            {
                for (auto &it : g[top.id])
                    if (!visitados[it.id])
                        fila.push(Vertice(it.id, it.dist + top.dist, top.id));

                visitados[top.id] = 1;
                pais[top.id] = top.pai;
            }

            fila.pop();

            if (fila.empty())
                return -1;

            top = fila.top();
        }

        pais[top.id] = top.pai;

        return top.dist;
    }

    ll busca(int s, int d)
    {
        queue<Vertice> fila;
        bool visitados[n];

        fill(visitados, visitados + n, 0);
        fill(pais.begin(), pais.end(), -1);

        fila.push(Vertice(s, 0));

        auto top = fila.front();

        while (top.id != d)
        {
            if (!visitados[top.id])
            {
                for (auto &it : g[top.id])
                    if (!visitados[it.id])
                        fila.push(Vertice(it.id, it.dist + 1, top.id));

                visitados[top.id] = 1;
                pais[top.id] = top.pai;
            }

            fila.pop();

            if (fila.empty())
                return -1;

            top = fila.front();
        }

        pais[top.id] = top.pai;

        return top.dist;
    }

    ll fluxo_maximo(int s, int d)
    {
        int u, v;
        ll flow = 0;

        while (busca(s, d) >= 0)
        {
            ll path = 1ll << 50;

            for (v = d; v != s; v = u)
            {
                u = pais[v];
                path = min(path, valAresta(u, v));
            }

            for (v = d; v != s; v = u)
            {
                u = pais[v];
                modificaAresta(u, v, -path);
                modificaAresta(v, u, path);
            }

            flow += path;
        }
        
        return flow;
    }
};

int main()
{
    int n, q, aux, qt;
    cin >> n >> q;
    int maxi = n*2+3;
    
    Grafo g(maxi);

    for(int i=1; i<=n; i++)
        g.addAresta(0, i, 1);

    for(int i=1; i<=n; i++) {
        scanf("%d", &qt);
        
        if(qt < n)
            g.addAresta(i,n+1, 1);

        while(qt--) {
            scanf("%d", &aux);
            g.addAresta(i, n+aux+1, 1);
        }
    }


    while(q--) {
        correcao.clear();
        Grafo g2(maxi);
        g2 = g;
    
        scanf("%d", &qt);
        int ajuste = n-qt;

        while(qt--) {
            scanf("%d", &aux);
            correcao.push_back(aux);
        }

        if(correcao.size() == 0) {
            g2.addAresta(n+1, maxi-1, n);
            
            if(g2.fluxo_maximo(0, maxi-1) == n)
                puts("Y");
            else
                puts("N");

            continue;
        }

        for(auto &it : correcao) {
            D(it+n+1);
            g2.addAresta(it+n+1, maxi-1, 1);
        }
            
        auto resp1 = g2.fluxo_maximo(0, maxi-1);
        
        if(resp1 != correcao.size()) {
            D(resp1);
            D(correcao.size());
            puts("N");
            continue;
        }

        if(correcao.size() != n)
            g2.addAresta(n+1, maxi-1, ajuste);

        for(auto &it : correcao)
            g2.addAresta(n+1+it, maxi-1, ajuste);
            
        auto resp2 = g2.fluxo_maximo(0, maxi-1);
        
        if(resp2 == ajuste)
            puts("Y");
        else
            puts("N");
    }
}
