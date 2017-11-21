// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Counting Sheep
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1609

#include <cstdio>
#include <set>

int main() {
    int n_casos, n, aux;

    scanf("%d", &n_casos);

    while(n_casos--) {
        std::set<int> s;

        scanf("%d", &n);

        for(int i=0; i<n; i++) {
            scanf("%d", &aux);
            s.insert(aux);
        }

        printf("%lu\n", s.size());
    }

    return 0;
}

