// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Back to the Future
// Nível: 6
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1447

#include <bits/stdc++.h>

using namespace std;


#define MAXM 10000
#define MAXN 1000

struct Node
{
    long long x, y, cap, cost;
    long long next;
} edge[MAXM];

class MinCost
{
  public:
    long long e, head[MAXN], dis[MAXN], pre[MAXN], record[MAXN], inq[MAXN];
    void Addedge(long long x, long long y, long long cap, long long cost)
    {
        edge[e].x = x, edge[e].y = y, edge[e].cap = cap, edge[e].cost = cost;
        edge[e].next = head[x], head[x] = e++;
        edge[e].x = y, edge[e].y = x, edge[e].cap = 0, edge[e].cost = -cost;
        edge[e].next = head[y], head[y] = e++;
    }
    pair<long long, long long> mincost(long long s, long long t)
    {
        long long mncost = 0, flow, totflow = 0;
        long long i, x, y;
        while (1)
        {
            memset(dis, 63, sizeof(dis));
            long long oo = dis[0];
            
            dis[s] = 0;
            deque<long long> Q;
            Q.push_front(s);
            
            while (!Q.empty())
            {
                x = Q.front(), Q.pop_front();
                
                inq[x] = 0;
                for (i = head[x]; i != -1; i = edge[i].next)
                {
                    y = edge[i].y;
                    if (edge[i].cap > 0 && dis[y] > dis[x] + edge[i].cost)
                    {
                        dis[y] = dis[x] + edge[i].cost;
                        pre[y] = x, record[y] = i;
                        if (inq[y] == 0)
                        {
                            inq[y] = 1;
                            if (Q.size() && dis[Q.front()] > dis[y])
                                Q.push_front(y);
                            else
                                Q.push_back(y);
                        }
                    }
                }
            }
            
            if (dis[t] == oo)
                break;
            flow = oo;
            for (x = t; x != s; x = pre[x])
            {
                long long ri = record[x];
                flow = min(flow, edge[ri].cap);
            }
            for (x = t; x != s; x = pre[x])
            {
                long long ri = record[x];
                edge[ri].cap -= flow;
                edge[ri ^ 1].cap += flow;
                edge[ri ^ 1].cost = -edge[ri].cost;
            }
            totflow += flow;
            mncost += dis[t] * flow;
        }
        return {mncost, totflow};
    }
    void init(long long n)
    {
        e = 0;
        for (long long i = 0; i <= n; i++)
            head[i] = -1;
    }
} g;


struct Rota {
   long long a;
   long long b;
   long long c;
};

int main() {
   long long n, m, a, b, c, d, k;
	long long cont = 0;
	
	Rota rota[MAXM];
	
	while(cin >> n >> m) {

		g.init(n+5);

		for(long long i=0; i<m; i++)
			scanf("%lld %lld %lld", &rota[i].a, &rota[i].b, &rota[i].c);
			
		scanf("%lld %lld", &d, &k);

		long long preco = 0;

		long long aux = d;
		
		for(long long i=0; i<m; i++) {
			g.Addedge(rota[i].a, rota[i].b, k, rota[i].c);
			g.Addedge(rota[i].b, rota[i].a, k, rota[i].c);
		}
		
		g.Addedge(0, 1, d, 0);
		
		auto safadao = g.mincost(0, n);
		
		cout << "Instancia " << ++cont << endl;
		if(safadao.second != d)
		   puts("impossivel");
		else
		   cout << safadao.first << endl;
		cout << endl;
		  
		
	}
	
	
   return 0;
}
