// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: VaiNaSort
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2592

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
    int t, n, count, atual, anterior;

    while (scanf("%d", &t) && t)
    {
        count = 1;

        while (true)
        {
            anterior = 0;

            for(int i = 0; i < t; i++) {
                scanf("%d", &atual);

                if(atual == anterior + 1)
                    anterior = atual;
            }

            if(anterior == t) {
                printf("%d\n", count);
                break;
            }

            count++;
        }
    }
}
