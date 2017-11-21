// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Six Flags
// Nível: 2
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1487

#include <cstdio>
#include <algorithm>

struct Sixflags {
    int d, p;
    double custo;
};

Sixflags brinq[100];

bool cmp(Sixflags a, Sixflags b) {
    return a.custo > b.custo;
}

int main() {
    int n, t, caso = 1;

    scanf("%d %d", &n, &t);

    while(n!=0) {
        int soma = 0;

        for(int i=0; i<n; i++) {
            scanf("%d %d", &brinq[i].d, &brinq[i].p);
            brinq[i].custo = (double)brinq[i].p/brinq[i].d;
        }

        std::sort(brinq, brinq+n, cmp);

        int it = 0;
        while(it < n) {
            soma += brinq[it].p;
            t -= brinq[it].d;
            while(t-brinq[it].d < 0)
                it++;
        }

        printf("Instancia %d\n", caso++);
        printf("%d\n\n", soma);

        scanf("%d %d", &n, &t);
    }

    return 0;
}

