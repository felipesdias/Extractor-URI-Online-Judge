// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Colorful Labels
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2233

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long int r, g, b, qtdg, qtdb, qtd;
    
    scanf("%llx %llx %llx", &r, &g, &b);
    
    qtdg = (r/g)*(r/g);
	qtdb = qtdg*((g/b)*(g/b));
	qtd = qtdg + qtdb + 1;
    
    printf("%llx\n", qtd);
 
    return 0;
}
