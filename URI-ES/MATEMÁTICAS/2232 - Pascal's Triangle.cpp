// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Pascal's Triangle
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2232

#include <iostream>
 
using namespace std;
 
int main() {
    int t, a, v;
    cin >> t;
    
    while(t--) {
        cin >> a;
        
        for(v = 1; a > 0; a--)
        v *= 2;
        
        cout << v-1 << endl;
    }
    return 0;
}
