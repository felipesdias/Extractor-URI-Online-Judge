// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Dijkstra
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2653

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    set<string> asdf;
    string banana;
    
    while(cin >> banana)
        asdf.insert(banana);
        
    cout << asdf.size() << endl;
 
    return 0;
}
