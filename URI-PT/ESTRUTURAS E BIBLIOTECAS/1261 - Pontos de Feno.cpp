// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Pontos de Feno
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1261

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, resp, val;
    string entrada;

    while (cin >> n >> m)
    {
        map<string, int> mapa;

        while (n--)
            cin >> entrada >> val,
                mapa[entrada] = val;

        while (m--)
        {
            resp = 0;

            while (cin >> entrada && entrada != ".")
                if (mapa.count(entrada))
                    resp += mapa[entrada];

            cout << resp << endl;
        }
    }
}
