// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Procurando Subsequências
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2126

#include <bits/stdc++.h>
using namespace std;

int main() {
    int caso = 1;
    char n1[10], n2[32];

    while(scanf("%s", &n1) > 0) {
        scanf("%s", &n2);

        int tam1 = strlen(n1);
        int tam2 = strlen(n2);

        int pos = -1;
        int qt_sub = 0;

        for(int i=0; i<tam2 - tam1 + 1; i++) {
            bool substring = true;

            if(n1[0] == n2[i]) {
                for(int j=1; j<tam1; j++) {
                    if(n1[j] != n2[i+j]) {
                        substring = false;
                        break;
                    }
                }

                if(substring) {
                    qt_sub++;
                    pos = i;
                }
            }
        }

        printf("Caso #%d:\n", caso++);

        if(pos > -1)
            printf("Qtd.Subsequencias: %d\nPos: %d\n\n", qt_sub, pos+1);
        else
            printf("Nao existe subsequencia\n\n");
    }
}
