// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Canteen Queue
// Level: 2
// Category: DATA STRUCTURES AND LIBRARIES
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1548

#include <cstdio>
#include <algorithm>

bool comp(int a, int b) {
    return a > b;
}

int main() {
    int n, m, p[1001], aux[1001];

    scanf("%d", &n);

    while(n--) {
        int cont = 0;

        scanf("%d", &m);

        for(int i=0; i<m; i++) {
            scanf("%d", &p[i]);
            aux[i] = p[i];
        }

        std::sort(aux, aux+m, comp);

        for(int i=0; i<m; i++)
            if(p[i]==aux[i])
                cont++;

        printf("%d\n", cont);
    }

    return 0;
}

