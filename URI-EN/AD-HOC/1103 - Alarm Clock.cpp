// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Alarm Clock
// Level: 1
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1103

#include <cstdio>

int main () {
        int h1, m1, h2, m2;

        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

        while(h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0) {
                if (h1 == h2 && m1 > m2 || h1 > h2)
                        h2 += 24;

                m1 += h1*60;
                m2 += h2*60;

                printf("%d\n", m2-m1);

                scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        }

        return 0;
}
