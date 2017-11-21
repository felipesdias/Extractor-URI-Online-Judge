// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Colision
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1618

#include <cstdio>

int main() {
    int n, aux[10];

    scanf("%d", &n);

    while(n--) {
        for(int i=0; i<10; i++)
            scanf("%d", &aux[i]);

        if(aux[8]>=aux[0] && aux[8]<=aux[2] && aux[9]>=aux[1] && aux[9]<=aux[7])
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}

