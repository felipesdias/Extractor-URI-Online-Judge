// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Invertendo Setas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2576

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

typedef vector<int> vi;

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
        g[a].erase(remove_if(g[a].begin(), g[a].end(), [b](Vertice v) { return v.id == b; }));
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
        for (auto &it : g[a])
            if (it.id == b)
            {
                it.dist += dif;
                break;
            }

        g[a].erase(remove_if(g[a].begin(), g[a].end(), [b](Vertice v) { return v.dist == 0; }));
    }

    ll dijkstra(int s, int d)
    {
        priority_queue<Vertice> fila;
        bool visitados[n];

        fill(visitados, visitados+n, 0);
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

        fill(visitados, visitados+n, 0);
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

        Grafo g2 = *this;

        while (g2.busca(s, d) >= 0)
        {
            ll path = 1ll << 50;

            for (v = d; v != s; v = u)
            {
                u = g2.pais[v];
                path = min(path, valAresta(u, v));
            }

            for (v = d; v != s; v = u)
            {
                u = g2.pais[v];
                g2.modificaAresta(u, v, -path);
                g2.modificaAresta(v, u, path);
            }

            flow += path;
        }

        return flow;
    }
};

int main()
{
    int n, m, a, b, ea, eb;

    cin >> n >> m >> a >> b;

    Grafo g(n);

    while(m--)
        cin >> ea >> eb, g.addAresta(ea-1, eb-1, 0), g.addAresta(eb-1, ea-1, 1);

    ea = g.dijkstra(a - 1, b - 1);
    eb = g.dijkstra(b - 1, a - 1);

    if(ea < eb)
        printf("Bibi: %d\n", ea);
    else if(eb < ea)
        printf("Bibika: %d\n", eb);
    else
        puts("Bibibibika");
}
