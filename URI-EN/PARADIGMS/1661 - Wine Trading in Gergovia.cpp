// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Wine Trading in Gergovia
// Level: 2
// Category: PARADIGMS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1661

#include <cstdio>
#include <cstdlib>

int main() {
    long long int n_hab, aux, aux2, total;

    scanf("%lld", &n_hab);

    while(n_hab) {
        total = aux2 = 0;

        for(int i=0; i<n_hab; i++) {
            if(i != n_hab) {
                scanf("%lld", &aux);
                aux2 += aux;
                total += abs(aux2);
            }
        }

        printf("%lld\n", total);

        scanf("%lld", &n_hab);
    }

    return 0;
}

