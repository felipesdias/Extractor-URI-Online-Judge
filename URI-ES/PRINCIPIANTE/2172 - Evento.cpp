// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Evento
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2172

#include <iostream>
 
using namespace std;
 
int main() {
    long long n, m;
    
    while(cin >> n >> m && (n || m))
        cout << n * m << "\n";
 
    return 0;
}
