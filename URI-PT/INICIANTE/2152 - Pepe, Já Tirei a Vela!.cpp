// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Pepe, Já Tirei a Vela!
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2152

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, m, a;
    
    scanf("%d", &n);

    while(n--) {
        scanf("%d%d%d", &h, &m, &a);

        if(h < 10 && m < 10)
            printf("0%d:0%d - A porta ", h, m);
        else if(h < 10)
            printf("0%d:%d - A porta ", h, m);
        else if(m < 10)
            printf("%d:0%d - A porta ", h, m);
        else
            printf("%d:%d - A porta ", h, m);

        if(a)
            printf("abriu!\n");
        else
            printf("fechou!\n");
    }
}
