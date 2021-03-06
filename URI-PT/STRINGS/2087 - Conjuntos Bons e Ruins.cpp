// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Conjuntos Bons e Ruins
// Nível: 4
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2087

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef trie<
    string,
    null_type,
    trie_string_access_traits<>,
    pat_trie_tag,
    trie_prefix_search_node_update>
    pref_trie;

int main()
{
    int n, bom;
    string x;
    
    while (scanf("%d", &n) && n)
    {
        pref_trie arvore;
        vector<string> palavras;

        for(int i = 0; i < n; i++)
            cin >> x, 
            arvore.insert(x), 
            palavras.push_back(x);
        
        if(arvore.size() < n)
            bom = false;
        else {
            int count = 0;
            
            for(auto &it : palavras) {
                auto range = arvore.prefix_range(it);
                
                for(auto it = range.first; it != range.second; it++, count++);                
            }

            bom = count == n;
        }

        printf("Conjunto %s\n", bom ? "Bom" : "Ruim");
    }
}
