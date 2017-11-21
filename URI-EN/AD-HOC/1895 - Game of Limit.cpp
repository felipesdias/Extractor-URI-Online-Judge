// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Game of Limit
// Level: 1
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1895

#include <cstdio>
#include <cstdlib>

int main() {
    int n, t, l, a = 0, b = 0, aux, aux2;

    scanf("%d %d %d", &n, &t, &l);

    for(int i=1; i<n; i++) {
        scanf("%d", &aux);
        aux2 = abs(t-aux);
        if(i%2==0 && aux2<=l) {
            b+=aux2;
            t = aux;
        }
        else if(i%2==1 && aux2<=l) {
            a+=aux2;
            t = aux;
        }
    }

    printf("%d %d\n", a, b);

    return 0;
}

