// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Exchanging Cards
// Level: 3
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1104

#include <bits/stdc++.h>
 
using namespace std;
 
typedef vector<int> vi;
 
int main() {
    int n, m;
    
    while(cin >> n >> m && n && m) {
        vi esq(n), dir(m);
        vi dif1, dif2;
        
        for(auto &it : esq)
            cin >> it;
        
        for(auto &it : dir)
            cin >> it;
            
        sort(esq.begin(), esq.end());
        sort(dir.begin(), dir.end());
        
        esq.erase(unique(esq.begin(), esq.end()), esq.end());
        dir.erase(unique(dir.begin(), dir.end()), dir.end());
        
        set_difference(esq.begin(), esq.end(), dir.begin(), dir.end(), 
                        inserter(dif1, dif1.begin()));
                        
        set_difference(dir.begin(), dir.end(), esq.begin(), esq.end(), 
                        inserter(dif2, dif2.begin()));
                        
        cout << min(dif1.size(), dif2.size()) << "\n";
    }
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}
