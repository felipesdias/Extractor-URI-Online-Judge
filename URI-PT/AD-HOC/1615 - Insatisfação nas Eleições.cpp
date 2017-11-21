// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Insatisfação nas Eleições
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1615

#include <cstdio>

int main() {
    int n_casos, i, n, m, aux;

    scanf("%d", &n_casos);

    while(n_casos--) {
        bool venc = false;
        int cand[10] = {0};

        scanf("%d %d", &n, &m);

        for(i=0; i<m; i++) {
            scanf("%d", &aux);
            cand[aux-1]++;
        }

        for(i=0; i<10; i++)
            if(cand[i]>m/2) {
                venc = true;
                break;
            }

        if(venc)
            printf("%d\n", i+1);
        else
            printf("-1\n");

    }

    return 0;
}

