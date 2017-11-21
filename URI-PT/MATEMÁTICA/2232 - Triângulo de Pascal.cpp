// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Triângulo de Pascal
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2232

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
