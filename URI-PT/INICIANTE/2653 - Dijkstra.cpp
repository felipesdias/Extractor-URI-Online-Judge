// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Dijkstra
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2653

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
