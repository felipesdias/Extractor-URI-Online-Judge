// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: A Mensagem de Will
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2523

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
