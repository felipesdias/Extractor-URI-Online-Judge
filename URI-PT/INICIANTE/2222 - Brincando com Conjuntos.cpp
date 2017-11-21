// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Brincando com Conjuntos
// Nível: 2
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2222

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t, q, qtd, e, a, b, i;
    
    cin >> n;
    
    while (n--)
    {
        cin >> t;

        vector<bitset<61>> conjuntos(t);

        for (i = 0; i < t; i++)
        {
            cin >> qtd;

            while (qtd--)
                cin >> e, conjuntos[i][e] = 1;
        }

        cin >> q;

        while (q--)
        {
            cin >> e >> a >> b;

            if (e == 1)
                cout << (conjuntos[a - 1] & conjuntos[b - 1]).count() << '\n';
            else
                cout << (conjuntos[a - 1] | conjuntos[b - 1]).count() << '\n';
        }
    }
}
