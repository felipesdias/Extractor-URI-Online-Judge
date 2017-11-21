// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Etiquetas Coloridas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2233

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
