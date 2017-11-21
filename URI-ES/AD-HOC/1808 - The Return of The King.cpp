// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: The Return of The King
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1808

#include <iostream>
 
using namespace std;
 
int main() {
    string entrada;
    int valores[10] = {0}, soma, total;
    
    cin >> entrada;
    
    for(auto &it : entrada) {
        if(it == '0') {
            valores[1]--;
            valores[0]++;
        }
        else
            valores[it-'0']++;
    }
    
    soma = 10 * valores[0];
    total = valores[0];
    
    for(int i = 1; i < 10; i++) {
        soma += i * valores[i];
        total += valores[i];
    }
    
    printf("%.2lf\n", soma * 1.0 / total);
 
    return 0;
}
