// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Paridad
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2176

#include <bits/stdc++.h>
using namespace std;

int main() {
    int cont = 0;
    char sequencia[110];

    int i = 0;
    while(scanf("%c", &sequencia[i]) > 0 && sequencia[i] != '\n') {
        if(sequencia[i] == '1') cont++;
        i++;
    }

    sequencia[i] = '\0';

    if(cont % 2)
        printf("%s1\n", sequencia);
    else
        printf("%s0\n", sequencia);
}
