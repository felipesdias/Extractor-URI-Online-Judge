// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Festival de Estátuas de Gelo
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1034

#include <bits/stdc++.h>
 
using namespace std;
 
typedef vector<int> vi;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, n, m;
    
    cin >> t;
    
    while(t--) 
    {
        cin >> n >> m;
        
        vi blocos(n);
        vi pd(m + 1, 1 << 30);
        
        for(auto &it : blocos)
            cin >> it;
            
        sort(blocos.begin(), blocos.end());
        
        pd[0] = 0;
            
        for(int i = 1; i <= m; i++)
            for(auto &it : blocos)
                if(i - it < 0)
                    break;
                else
                    pd[i] = min(pd[i], pd[i-it] + 1);
                    
        cout << pd[m] << "\n";
    }
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}
