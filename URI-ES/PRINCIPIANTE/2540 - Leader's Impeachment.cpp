// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Leader's Impeachment
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2540

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, e;

    while (cin >> n)
    {
        s = 0;

        for(int i = 0; i < n; i++)
            cin >> e,
                s += e == 0;

        if (s <= n / 3)
            puts("impeachment");
        else
            puts("acusacao arquivada");
    }

    return 0;
}
