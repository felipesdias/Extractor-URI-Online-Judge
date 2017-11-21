// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Letters
// Level: 5
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1714

#include <bits/stdc++.h>

using namespace std;

struct Grafo {
  char c;
  vector<pair<int, int> > filhos;
};

struct Vertice {
  int i, j;
  int dist;

  Vertice(int a, int b, int d) {
    i = a;
    j = b;
    dist = d;
  }

  bool operator != (const Vertice &a) const {
    return (i != a.i || j != a.j); 
  }

  bool operator < (const Vertice &a) const {
    return (dist > a.dist); 
  }
};

Grafo grafo[110][110];
int n;
int tam;
bool visitado[110][110];
bool esta[260];
string palavra;

int djkstra() {
  priority_queue<Vertice> fila;

  fila.push(Vertice(0, 0, 0));

  Vertice d = Vertice(n-1, n-1, 0);
  auto top = fila.top();

  while(top != d) {
    if(!visitado[top.i][top.j]) {
      for(auto &it : grafo[top.i][top.j].filhos)
        if(!visitado[it.first][it.second]) {
          fila.push(Vertice(it.first, it.second, 1 + top.dist));
        }

      visitado[top.i][top.j] = true;
    }

    fila.pop();

    if (fila.empty())
      return 1000000;

    top = fila.top();
  }

  return top.dist;
}

int busca(string s, int pos) {
  if(pos == tam) {
    fill(esta, esta+255, false);
    for(int i=0; i<s.size(); i++)
      esta[s[i]] = true;

    for(int i=0; i<n; i++)
      for(int j=0; j<n; j++)
        visitado[i][j] = !esta[grafo[i][j].c];

    return djkstra();
  }

  return min( busca(s+palavra[pos], pos+1), busca(s+char(tolower(palavra[pos])), pos+1) );
}

int main() {
  cin >> n;

  fill(esta, esta+255, false);
  getchar();

  for(int i=0; i<n; i++)
    for(int j=0; j<n; j++) {
      scanf(" %c", &grafo[i][j].c);
      esta[grafo[i][j].c] = true;
      if(j+1 < n)
        grafo[i][j].filhos.push_back(make_pair(i,j+1));
      if(i+1 < n)
        grafo[i][j].filhos.push_back(make_pair(i+1,j));
      if(j-1 >= 0)
        grafo[i][j].filhos.push_back(make_pair(i,j-1));
      if(i-1 >= 0)
        grafo[i][j].filhos.push_back(make_pair(i-1,j));
    }

  palavra = "";
  for(int i=65; i<=90; i++)
    if(esta[i] || esta[i+32])
    palavra += char(i);

  tam = palavra.size();

  int result = busca("", 0);
  if(result == 1000000)
    puts("-1");
  else
    printf("%d\n", result+1);
}
