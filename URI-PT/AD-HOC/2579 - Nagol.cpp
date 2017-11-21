// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Nagol
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2579

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if (b % 2)
    {
        if ((c + d) % 2)
            puts("Esquerda");
        else
            puts("Direita");
    }
    else
    {
        if (d % 2)
            puts("Esquerda");
        else
            puts("Direita");
    }

    return 0;
}
