// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Dijkstra
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2653

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
