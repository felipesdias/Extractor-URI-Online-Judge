// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Loteria
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2473

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int numeros[100] = {0}, i, resp = 0, e;
    
    for(i = 0; i < 6; i++)
        cin >> e, numeros[e] = 1;
        
    for(i = 0; i < 6; i++)
        cin >> e, resp += numeros[e];
 
    if(resp == 3)
        puts("terno");
    else if(resp == 4)
        puts("quadra");
    else if(resp == 5)
        puts("quina");
    else if(resp == 6)
        puts("sena");
    else
        puts("azar");
 
    return 0;
}
