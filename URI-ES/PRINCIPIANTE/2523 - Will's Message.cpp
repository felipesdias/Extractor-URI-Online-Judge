// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Will's Message
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2523

#include <iostream>
 
using namespace std;
 
int main() {
    string alfabeto;
    int n, e;
    
    while(cin >> alfabeto) {
        cin >> n;
        
        while(n--)
            cin >> e, cout << alfabeto[e-1];
        
        cout << "\n";
    }
    
    return 0;
}
