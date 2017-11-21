// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Juntando Casais
// Nível: 7
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1302

#include<iostream>
#include<vector>
#include<cstdio>
#include<queue>
#include<stack>
#include<algorithm>

using namespace std;

struct T{
	T(){d=idc=p=0;}
	int d,idc,p;
};

int main(){

	int n,q;
	
	while(scanf("%d", &n) > 0){
	
		int IDC = 0;
		T t[n];
		int v[n];
		int dist[n], atual,b,cont,ppp;
		vector<int>tam(1);
		for(int i=0;i<n;i++){
			scanf("%d", &v[i]);
			v[i]--;
			dist[i] = 0;	
		}
		
		for(int i=0;i<n;i++){
			atual = i;
			stack<int> q;
			cont = 1;
			while(!dist[atual]){			
				q.push(atual);
				dist[atual] = cont;
				if(dist[v[atual]] && t[v[atual]].idc == 0){
					
					t[atual].idc = ++IDC;
					t[atual].d = 0;
					ppp = dist[atual] - dist[v[atual]] + 1;
					t[atual].p = ppp;
					tam.push_back(ppp);
					while(ppp--){
						atual = q.top();
						q.pop();
						t[atual].idc = IDC;
						t[atual].d = 0;
						t[atual].p = ppp;
					}
					break;
				}
				else if(dist[v[atual]] && t[v[atual]].idc != 0){atual = v[atual];break;}
				atual = v[atual];
				cont++;
			}
			while(!q.empty()){
				b = q.top();
				t[b] = t[atual];
				t[b].d++;
				atual = b;
				q.pop();
			}
		}
		scanf("%d", &q);
		int a;
		for(int i=0;i<q;i++){
			scanf("%d %d", &a, &b);
			a--;
			b--;
			if(t[a].idc != t[b].idc) puts("-1");
			else {
				if(t[b].p > t[a].p)swap(a,b);
				
				if(t[a].p != t[b].p)
					printf("%d\n",t[a].d + t[b].d + min( t[a].p-t[b].p, tam[t[a].idc] - t[a].p + t[b].p ));
				else {
					int resp = 0;
					while(a != b){
						if(t[a].d > t[b].d){
							a = v[a];
						}
						else
							b = v[b];
						resp++;
					}
					printf("%d\n", resp);
				}
			}
		}
	}


	return 0;
}

